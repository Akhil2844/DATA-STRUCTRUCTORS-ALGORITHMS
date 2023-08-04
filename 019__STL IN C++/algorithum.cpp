#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);
    v.push_back(11);

    cout << "Finding 9 -> " << (binary_search(v.begin(), v.end(), 9)) << endl;

    cout << "Lower bound -> " << (lower_bound(v.begin(), v.end(), 9) - v.begin()) << endl;

    cout << "Upper bound -> " << (upper_bound(v.begin(), v.end(), 18) - v.begin()) << endl;

    int a = 4;
    int b = 7;

    cout << "Max -> " << max(a, b) << endl;
    cout << "Min -> " << min(a, b) << endl;

    swap(a, b);
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "Reverse String is -> " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "Rotated -> ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    cout << "Sorted -> " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}