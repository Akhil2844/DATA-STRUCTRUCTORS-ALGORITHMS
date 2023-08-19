#include<iostream>
using namespace std;

class Hero
{
    //properties

// if there is in empty class we can get a memory of single byte 
    //private :

    public:
int health;
char level;

    void print()
    {
        cout<<level<<endl;
    }

};


int main()
{

    // creation of object
    Hero ramesh;;

     ramesh.health=70;
     ramesh.level='r';
     
    // cout<<"Size is : "<<sizeof(h1)<<endl;
    cout<<"Health is : "<<ramesh.health<<endl;
    cout<<"Level is : "<<ramesh.level<<endl;

    return 0;
}