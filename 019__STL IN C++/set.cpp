#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(6);
    s.insert(6);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "-5 is present or not -> " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(1);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}



// INSRT,COUNT ,FIND KI TIME COMPLEXITY O(log N) H