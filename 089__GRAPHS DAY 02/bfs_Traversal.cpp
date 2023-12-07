#include<iostream>
#include<map>
#include<unordered_map>
#include<queue>
#include<list>

using namespace std;

void prepare_adjList(unordered_map<int,list<int>>&adjList,vector<pair<int,int>>&edges)
{
    for(int i=0;i<edges.size();i++)
    {
    int u=edges[i].first;
    int v=edges[i].second;

    adjList[u].push_back(v);
    adjList[v].push_back(u);
    }
}

void bfs(int node,unordered_map<int,list<int>>&adjList,vector<int>&ans,unordered_map<int,bool>&visited)
{
    queue<int>q;
    q.push(node);
    visited[node]=true;

    while(!q.empty())
    {
        int frontNode=q.front();
        q.pop();

        // store the frontnode into queue
        ans.push_back(frontNode);

        // traverse all the neighour components
        for(auto i:adjList[frontNode])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}


vector<int> BfsTraversal(int vertex,vector<pair<int,int>>edges)
{
  unordered_map<int,list<int>>adjList;
  unordered_map<int,bool>visited;
  vector<int>ans;

  prepare_adjList(adjList,edges);

  // traverse all the components of a graph
  for(int i=0;i<vertex;i++)
  {
    if(!visited[i])
    {
        bfs(i,adjList,ans,visited);
    }
  }
  return ans;
}
int main() {
    // Input: Pairs of integers representing edges
    vector<pair<int, int>> edges = {
        {18, 62}, {7, 13}, {3, 4}, {17, 8}, {9, 9}, {2, 16}, {7, 16}, {6, 13}, {3, 0},
        {7, 14}, {9, 4}, {11, 4}, {14, 6}, {5, 12}, {5, 9}, {15, 5}, {6, 17}, {8, 8},
        {9, 17}, {3, 8}, {13, 13}, {9, 7}, {13, 17}, {11, 5}, {0, 10}, {0, 7}, {11, 6},
        {1, 8}, {10, 16}, {7, 15}, {11, 15}, {16, 17}, {6, 3}, {12, 1}, {15, 1}, {5, 7},
        {17, 14}, {2, 3}, {2, 4}, {6, 8}, {6, 6}, {12, 17}, {11, 0}, {2, 1}, {6, 15},
        {9, 16}, {14, 14}, {1, 9}, {14, 5}, {10, 7}, {13, 12}, {6, 0}, {11, 12}, {14, 0},
        {10, 17}, {11, 10}, {16, 14}, {4, 17}, {11, 1}, {9, 12}, {7, 4}, {12, 4}, {9, 0}
    };

    // Number of vertices (assuming vertices are numbered from 0 to 62)
    int numVertices = 63;

    // Get BFS traversal order
    vector<int> bfsOrder = BfsTraversal(numVertices, edges);

    // Output the BFS traversal order
    cout << "BFS Traversal Order:" << endl;
    for (int node : bfsOrder) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
