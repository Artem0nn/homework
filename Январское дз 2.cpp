#include <iostream>
#include <fstream>
#include <vector>
#include <queue>


using namespace std;

vector<vector<int>> g;
vector<vector<int>> t;

int n;
int m;
int s;
int finish;

void bfs() {
queue<int>q;
q.push(s);
vector<bool>used(n);
vector<int>d(n), p(n, -1);
used[s] = true;

while (!q.empty()) {
int V = q.front();
q.pop();
for (int i = 0; i < n; ++i) {
if (g[V][i] && !used[i]) {
used[i] = true;
q.push(i);
d[i] = d[V] + 1;
p[i] = V;
}
}
}
if (!used[finish]) {
cout << "NO path!";
}
else {
vector<int> path;
for (int V = finish; V != -1; V = p[V]) {
path.push_back(V);
}

cout << "Steps: ";
cout << path.size() - 1;
cout << "\n";

reverse(path.begin(), path.end());
cout << "Path: ";
for (size_t i = 0; i < path.size(); ++i) {
cout << path[i] + 1 << " ";
}

ofstream fout;
fout.open("output.txt");
if (fout)
{
fout << path.size() - 1;
fout << "\n";
for (int i = 0; i < path.size(); ++i) {
fout << path[i] + 1 << " ";
}
fout.close();
}

}
}


int main()
{
vector <int> v;

ifstream fin("input.txt", ifstream::in);
if (fin)
{
fin >> n >> m;
int a;

for (int j = 0; j < m; j++)
{
for (int i = 0; i < 2; i++)
{
fin >> a;
v.push_back(a);
}
t.push_back(v);
v.clear();
}

fin >> s;
fin >> finish;
s--;
finish--;
}

for (int i = 0; i < m; ++i)
{
for (int j = 0; j < 2; ++j)
{
cout << t[i][j] << " ";
}
cout << "\n";
}
cout << "\n";

g.resize(n);
for (int i = 0; i < n; i++)
g[i].resize(n);

for (int i = 0; i < m; ++i)
{
g[t[i][0] - 1][t[i][1] - 1] = 1;
g[t[i][1] - 1][t[i][0] - 1] = 1;
}

for (int i = 0; i < n; ++i)
{
for (int j = 0; j < n; ++j)
{
cout << g[i][j] << " ";
}
cout << "\n";
}
cout << "\n";

bfs();
}
