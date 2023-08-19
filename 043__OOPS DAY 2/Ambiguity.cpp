#include<iostream>
using namespace std;

class A {

public:
string name;

void func()
{
    cout<<"I am A "<<endl;
}
};

class B {

public:
string name;

void func()
{
    cout<<"I am B "<<endl;
}
};


class C:public A,public B
{

};

int main()
{

    C c;
    // c.func();

    c.A::func();
    c.B::func();
    return 0;
}