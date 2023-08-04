#include<iostream>
using namespace std;

int update(int a)
{
    a=5;
    return 5;
}

void update2(int b)
{
    b=b/2;
}
int main()
{
    int a=15;
    update(a);
    cout<<a<<endl;

    int b=10;
    update(b);
    cout<<b<<endl;
}