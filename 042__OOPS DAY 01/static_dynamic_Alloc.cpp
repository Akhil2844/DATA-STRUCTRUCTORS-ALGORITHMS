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
   // Static Allocation
    Hero a;
    a.setHealth(90);
    a.setLevel('B');
    cout<<"Health is : "<<a.getHealth()<<endl;
    cout<<"Level is : "<<a.getLevel()<<endl;


   // Dynamic Memory Allocation
   Hero*b=new Hero;
   b->setHealth(70);
   b->setLevel('T');
   cout<<"Health is : "<<(*b).getHealth()<<endl;
   cout<<"Level is : "<<(*b).getLevel()<<endl;

   cout<<"Health is : "<<b->getHealth()<<endl;
   cout<<"Level is : "<<b->getLevel()<<endl;


    return 0;

}

