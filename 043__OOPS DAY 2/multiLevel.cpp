#include<iostream>
using namespace std;

class Animal
{
    public:
    int age;
    int height;

    public:
    void speak()
    {
        cout<<"Speaking "<<endl;
    }
};

class Dog:public Animal
{

};

class GermanSepherd:public Dog
{

};

int main()
{

    GermanSepherd d1;
    d1.speak();

    cout<<d1.age<<endl;
    return 0;
}