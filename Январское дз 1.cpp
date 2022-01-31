#include <iostream>
#include <vector>
#include <queue>
#include <fstream>

using namespace std;

vector<vector<int>>g;
int n;
int s;
int finish;

void bfs() 
{
queue<int>q;
q.push(s);
vector<bool>used(n);
vector<int>d(n), p(n, -1);
used[s] = true;

while (!q.empty()) 
{
int V = q.front();
q.pop();
for (int i = 0; i < n; ++i) 
{
if (g[V][i] && !used[i]) 
{
used[i] = true;
q.push(i);
d[i] = d[V] + 1;
p[i] = V;
}
}
}
if (!used[finish]) 
{
cout << "NO path!";
}
else {
vector<int> path;
for (int V = finish; V != -1; V = p[V]) 
{
path.push_back(V);
}

reverse(path.begin(), path.end());
cout << "Path: ";
for (size_t i = 0; i < path.size(); ++i) 
{
cout << path[i] + 1 << " ";
}

}
}



int main()
{
vector <int> v;


ifstream fin("test.txt", ifstream::in);
if (fin)
{
fin >> n;
int a;

for (int j = 0; j < n; j++)
{
for (int i = 0; i < n; i++)
{
fin >> a;
v.push_back(a);
}
g.push_back(v);
v.clear();
}

fin >> s;
fin >> finish;
s--;
finish--;
}

bfs();

}
