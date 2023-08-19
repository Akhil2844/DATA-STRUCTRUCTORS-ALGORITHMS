#include<iostream>
using namespace std;

class A
{
  public:
  string name;

  void func1()
  {
    cout<<"Inside function 1 "<<endl;
  }

};

//Hierarchical Inheritance

class B:public A
{
 public:
  string name;

  void func2()
  {
    cout<<"Inside function 2 "<<endl;
  }
};

class C:public A
{
     public:
  string name;

  void func3()
  {
    cout<<"Inside function 3 "<<endl;
  }
};

int main()
{
    A a;
    a.func1();

    B b;
    b.func1();
    b.func2();

    C c;
    c.func1();
    c.func3();
    return 0;
}