#include <iostream>
#include <map>
#include <unordered_map>
#include <list>
using namespace std;

class graph
{

public:
    unordered_map<int, list<int>> adj;

    void add_edge(int u, int v, int direction)
    {
        // direction = 0 ->undirected
        // direction = 1 ->direction

        // create an edge fro u to v
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printedge()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "Enter number of nodes " << endl;
    cin >> n;

    int m;
    cout << "Enter number of edges " << endl;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating an undirected graph
        g.add_edge(u, v, 1);
    }

    // printing graph
    g.printedge();

    return 0;
}