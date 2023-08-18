#include<iostream>
using namespace std;
class Hero
{


    private:
    int health;

    public:
    char level;

    // constructor called
    Hero()
{
    cout<<"Constructor Called "<<endl;
}

// parametrised constructor

Hero(int health)
{
    cout<<"this-> "<<this<<endl;
    this->health=health;

}

Hero(int health , char level)
{
    cout<<"this-> "<<this<<endl;
    this->health=health;
    this->level=level;
}



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
    // cout<<"Hi"<<endl;
    // Hero a;
    // cout<<"Hello"<<endl;
    // cout<<endl;

    Hero ramesh(90);
    cout<<"Address is "<<&ramesh<<endl;

   // Dynamic Memory Allocation
//    cout<<"Hi"<<endl;
//    Hero*b=new Hero;
//    cout<<"Hello"<<endl;
   Hero *h=new Hero(90,'B');
   cout<<"Address is "<<h<<endl;

  

    return 0;

}
