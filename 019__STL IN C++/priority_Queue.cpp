#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // maximum heap
    priority_queue<int> maxi;

    // minimum heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(9);
    maxi.push(8);

    cout << "Size -> " << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(9);
    mini.push(8);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Khaali h kya -> " << maxi.empty() << endl;
}