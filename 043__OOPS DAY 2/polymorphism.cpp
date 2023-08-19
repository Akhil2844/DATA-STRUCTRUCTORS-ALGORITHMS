#include<iostream>
using namespace std;

// COMPILE TIME POLYMORPHISM

class akhil
{

    // Function overloading
    public:
    int a;

    public:
    void sayHello()
    {
        cout<<"Hello this side Akhil "<<endl;
    }

    void sayHello(char c)
    {
        cout<<"Hello this side Akhil"<<endl;

    }

    int sayHello(char c,int n)
    {
        cout<<"Hello this side Akhil"<<endl;
        return n;
    }


    // Operator Overloading
    void operator+ (akhil&obj)
    {
       int value1=this->a;
       int value2=obj.a;
       cout<<"Output = "<<value2-value1<<endl;
       cout<<"Hello Akhil "<<endl;
    }

    void operator() ()
    {
      cout<<"Main bracket hu "<<this->a<<endl;
    }
};



// RUN TIME POLYMORPHISM
class Animal
{
   public:

   void speak()
   {
    cout<<"Speaking "<<endl;
   }
};

class Dog:public Animal
{
    public:
    void speak()
    {
        cout<<"Barking "<<endl;
    }
};

int main()
{
      
  Dog d;
  d.speak();

    // akhil k;
    // k.sayHello();

    akhil obj1,obj2;
    obj1.a=5;
    obj2.a=10;
    obj1+obj2;

    obj1();
return 0;

}