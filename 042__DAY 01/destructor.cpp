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
    cout<<"Simple Constructor Called "<<endl;
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

    ~Hero()
    {
        cout<<"Destructor bahi called "<<endl;
    }
    
    };


int main()
{
   // Static Allocation
    Hero a;

   // Dynamic Memory Allocation
   Hero*b=new Hero();

   //  destructor called manually
   delete b;

  

    return 0;

}
