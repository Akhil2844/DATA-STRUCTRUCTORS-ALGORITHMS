#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Akhil");
    s.push("Kumar");
    s.push("Love Babbar");

    cout << "Element at top : " <<(s.top()) << endl;

    s.pop();

    cout << "Element at top : " << s.top() << endl;

    cout << "Size of an Stack : " << s.size() << endl;

    cout << "Empty or not : " << s.empty() << endl;
}