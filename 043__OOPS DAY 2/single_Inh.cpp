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
int main()
{

    Dog d1;
    d1.speak();

    cout<<d1.age<<endl;
    return 0;
}