#include<iostream>
using namespace std;

class Animal
{
    public:
    int age;
    int height;

    public:
    void bark()
    {
        cout<<"Barking "<<endl;
    }
};

class Human
{
    public:
    string color;

    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};

class Hybrid:public Animal,public Human
{

};

int main()
{

    Hybrid d1;
    d1.bark();
    d1.speak();
    
    return 0;
}