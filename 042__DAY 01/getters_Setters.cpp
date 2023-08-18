#include<iostream>
using namespace std;

class Hero
{

    private:
    int health;

    public:
    char level;

    void print ()
    {
        // cout<<level<<endl;
    }    

    //getters
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    } 

    // setters
    void setHealth(int h)
    {
        health=h;
    }

    void setLevel(char l)
    {
       level=l;
    }
    
    };


int main()
{

    Hero ramesh;

    ramesh.setHealth(100);
    cout<<"Ramesh Health is : "<<ramesh.getHealth()<<endl;
     
     ramesh.setLevel('A');
     cout<<"Ramesh Level is : "<<ramesh.getLevel()<<endl;

    return 0;

}
