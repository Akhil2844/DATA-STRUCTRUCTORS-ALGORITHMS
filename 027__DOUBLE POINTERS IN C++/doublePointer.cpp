#include <iostream>
using namespace std;

void update(int **p)
{
    // p = p + 1;
    // kuch update hoga -->  no

    // *p = *p + 1;
    // kuch update hoga  --> yes

    **p = **p + 1;
    // kuch update hoga --> yes
}
int main()
{
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;

    // cout<<"Printing p is "<<p1<<endl;
    // cout<<*p2<<endl;

    // cout<<i<<endl;
    // cout<<*p1<<endl;
    // cout<<**p2<<endl;

    // cout<<&i<<endl;
    // cout<<p1<<endl;
    // cout<<*p2<<endl;

    // cout<<&p1<<endl;
    // cout<<p2<<endl;

    cout << "Before " << i << endl;
    cout << "Before " << p1 << endl;
    cout << "Before " << p2 << endl;

    update(p2);

    cout << "After " << i << endl;
    cout << "After " << p1 << endl;
    cout << "After " << p2 << endl;

    return 0;
}