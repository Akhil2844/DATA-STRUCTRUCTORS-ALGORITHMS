#include <bits/stdc++.h>

using namespace std;

void topsort(int node, stack<int> &s, vector<int> &visited, unordered_map<int, list<int>> &adjList)
{
    visited[node] = 1;

    for (auto neighbour : adjList[node])
    {
        if (!visited[neighbour])
        {
            topsort(neighbour, s, visited, adjList);
        }
    }
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, list<int>> adjList;

    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
    }

    vector<int> visited(v, 0); // Initialize visited vector
    stack<int> s;

    for (int i = 0; i < v; i++)
    { // Iterate over vertices 'v'
        if (!visited[i])
        {
            topsort(i, s, visited, adjList);
        }
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main()
{
    // Example usage
    int v = 6; // Number of vertices
    int e = 6; // Number of edges

    // Edges represented as pairs (u, v)
    vector<vector<int>> edges = {{5, 2}, {5, 0}, {4, 0}, {4, 1}, {2, 3}, {3, 1}};

    vector<int> result = topologicalSort(edges, v, e);

    cout << "Topological Sort: ";
    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}
