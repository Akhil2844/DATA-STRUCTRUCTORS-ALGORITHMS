#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <string>
#include <queue>

using namespace std;

bool bfs(int node, unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited)
{
    unordered_map<int, int> parent;
    parent[node] = -1;
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        for (int neighbour : adjList[frontNode])
        {
            if (visited[neighbour] == true && parent[frontNode] != neighbour)
            {
                return true;
            }
            else if (!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = frontNode;
            }
        }
    }
    return false;
}
string cycleDetectionBFS(int n, int m, vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adjList;

    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    unordered_map<int, bool> visited;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bool ans = bfs(i, adjList, visited);
            if (ans == true)
            {
                return "Yes";
            }
        }
    }
    return "No";
}

int main()
{
    // Input: Pairs of integers representing edges
    vector<vector<int>> edges = {
        {18, 62}, {7, 13}, {3, 4}, {17, 8}, {9, 9}, {2, 16}, {7, 16}, {6, 13}, {3, 0}, {7, 14}, {9, 4}, {11, 4}, {14, 6}, {5, 12}, {5, 9}, {15, 5}, {6, 17}, {8, 8}, {9, 17}, {3, 8}, {13, 13}, {9, 7}, {13, 17}, {11, 5}, {0, 10}, {0, 7}, {11, 6}, {1, 8}, {10, 16}, {7, 15}, {11, 15}, {16, 17}, {6, 3}, {12, 1}, {15, 1}, {5, 7}, {17, 14}, {2, 3}, {2, 4}, {6, 8}, {6, 6}, {12, 17}, {11, 0}, {2, 1}, {6, 15}, {9, 16}, {14, 14}, {1, 9}, {14, 5}, {10, 7}, {13, 12}, {6, 0}, {11, 12}, {14, 0}, {10, 17}, {11, 10}, {16, 14}, {4, 17}, {11, 1}, {9, 12}, {7, 4}, {12, 4}, {9, 0}};

    // Number of vertices (assuming vertices are numbered from 0 to 10)
    int numVertices = 11;

    string ans = cycleDetectionBFS(numVertices, edges.size(), edges);

    if (ans == "Yes")
    {
        cout << "Cycle is present" << endl;
    }
    else if (ans == "No")
    {
        cout << "No cycle is present" << endl;
    }

    return 0;
}
