#include <iostream>

#include <vector>

using namespace std;

int main()

{
    vector<int> v;

    vector<int> a(5, 1);

    vector<int> last(a);

    for (int i : a)

    {

        cout << i << " ";

    }

    cout << endl;

    for (int i : last)

    {

        cout << i << " ";

    }

    cout << endl;

    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(1);

    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);

    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3);

    cout << "Capacity -> " << v.capacity() << endl;

    cout << "Size -> " << v.size() << endl;

    cout << "Element at 2nd index is -> " << v.at(2) << endl;

    cout << "Empty or not -> " << v.empty() << endl;

    cout << "Element at Front Index is -> " << v.front() << endl;

    cout << "Element at Back Index is -> " << v.back() << endl
         << endl;

    cout << "Element Before pop back -> " << endl;

    for (int i : v)

    {

        cout << i << " ";

    }

    cout << endl
        
         << endl;

    v.pop_back();

    cout << "Element After pop back -> " << endl;

    for (int i : v)

    {

        cout << i << " ";

    }

    cout << endl;

    cout << "Before Clear size -> " << v.size() << endl;

    v.clear();

    cout << "After Clear size -> " << v.size() << endl;
}