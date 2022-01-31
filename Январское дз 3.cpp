#include <iostream>
#include <vector>
#include <queue>
#include <fstream>

using namespace std;

vector<vector<int>> g;
vector<vector<int>> t;

int n;
int m;
int s;
int finish;
vector <int> color;
bool biparite = true;


int invert(int c) 
{
return c == 1 ? 2 : 1;
}

void biparite_check()
{
int c = 1;
int begin, end;

for (int i = 0; i < m; i++)
{
begin = t[i][0] - 1;
end = t[i][1] - 1;

if (color[begin] == 0)
{
if (color[end] != 0)
{
color[begin] = invert(color[end]);
c = color[end];
}
else
{
color[begin] = c;
c = invert(c);

if (color[end] == 0)
{
color[end] = c;
c = invert(c);
}
}
}
else
{
if (color[end] == 0)
{
color[end] = invert(color[begin]);
}
}
}
for (int i = 0; i < m; i++)
{
begin = t[i][0] - 1;
end = t[i][1] - 1;
if (color[begin] == color[end])
biparite = false;
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

color.resize(n);

biparite_check();
if (biparite) {
cout << "Yes";
}
else {
cout << "No";
}
}
