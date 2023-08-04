#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<string> q;

    q.push("Akhil");
    q.push("Kumar");
    q.push("Love_Babbar");

    cout << "Size Before pop is : " << q.size() << endl;

    cout << "1st Element : " << q.front() << endl;

    q.pop();

    cout << "1st Element : " << q.front() << endl;

    cout << "Size after pop is : " << q.size() << endl;
}