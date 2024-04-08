#include<iostream>
#include <list>
#include <unordered_map>
#include <vector>

using namespace std;

bool dfscycledetect(int node, unordered_map<int, list<int>>& adjList, unordered_map<int, bool>& visited,
                    unordered_map<int, bool>& dfsvisited) {
    visited[node] = true;
    dfsvisited[node] = true;

    for (auto neighbour : adjList[node]) {
        if (!visited[neighbour]) {
            bool cycledetect = dfscycledetect(neighbour, adjList, visited, dfsvisited);
            if (cycledetect == true) {
                return true;
            }
        } else if (dfsvisited[neighbour]) {
            return true;
        }
    }
    dfsvisited[node] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>>& edges) {
    unordered_map<int, list<int>> adjList;
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
    }

    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisited;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            bool ans = dfscycledetect(i, adjList, visited, dfsvisited);
            if (ans == true) {
                return true;
            }
        }
    }
    return false;
}



int main() {
    int n = 4;  // Number of nodes
    vector<pair<int, int>> edges = {{1, 2}, {2, 3}, {3, 1}, {3, 4}};

    bool hasCycle = detectCycleInDirectedGraph(n, edges);

    if (hasCycle) {
        cout << "The directed graph has a cycle." << endl;
    } else {
        cout << "The directed graph does not have a cycle." << endl;
    }

    return 0;
}
