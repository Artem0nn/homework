#include <iostream>
#include <vector>
#include <queue>
#include <fstream>

using namespace std;

bool is_bipartite()
{
    std::set <int> painted;
    std::map <int, bool> color;
    int start_vertex = 0;
    while (graph.size() != painted.size())
    {
        while (painted[start_vertex])
            start_vertex++;
        if (!dfs_visit(start_vertex, true, painted, color))
            return false;
    }
    return true;
}
 
bool dfs_visit(int v, bool color, std::set& painted, std::map<int, bool>& colors)
{
    painted.insert(v);
    colors[v] = color;
 
    for (int next_vertex : graph[v])
    {
        if (painted.find(next_vertex) != painted.end())
        {
            if (colors[next_vertex] == color) 
                return false;
        }
        else
        {
            if (!dfs_visit(next_vertex, !color))
                return false;
        }
    }
    return true;
}
