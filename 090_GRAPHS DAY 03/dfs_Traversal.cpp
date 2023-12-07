#include<iostream>
#include<map>
#include<unordered_map>
#include<queue>
#include<list>
#include<vector>

using namespace std;

void dfs(int node,unordered_map<int,list<int>>&adjList,vector<int>&component,unordered_map<int,bool>&visited)
{
    component.push_back(node);

    visited[node]=true;

    for(auto i:adjList[node])
    {
        if(!visited[i])
        {
            dfs(i,adjList,component,visited);
        }
    }

}
vector<vector<int>>DFSTraversal(int V,int E,vector<vector<int>>&edges)
{
    unordered_map<int,list<int>>adjList;

    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    unordered_map<int,bool>visited;
    vector<vector<int>>ans;

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            vector<int>component;
            dfs(i,adjList,component,visited);
            ans.push_back(component);
        }
    }
return ans;
}

int main() {
    // Input: Pairs of integers representing edges
    vector<vector<int>> edges = {
        {0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}, {3, 7}, {3, 8}, {4, 9}, {4, 10}
    };

    // Number of vertices (assuming vertices are numbered from 0 to 10)
    int numVertices = 11;

    // Get DFS traversal order
    vector<vector<int>> dfsOrder = DFSTraversal(numVertices, edges.size(), edges);

    // Output the DFS traversal order
    cout << "DFS Traversal Order:" << endl;
    for (const vector<int>& component : dfsOrder) {
        for (int node : component) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}