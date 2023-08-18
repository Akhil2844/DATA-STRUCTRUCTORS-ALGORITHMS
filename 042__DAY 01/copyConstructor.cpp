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


// copy constructor
Hero(Hero& temp)
{
    cout<<"Copy constructor called "<<endl;
    this->health=temp.health;
    this->level=temp.level;
}

Hero(int health , char level)
{
    // cout<<"this-> "<<this<<endl;
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
   Hero suresh(70,'B');


  // coppy constructor
   Hero R(suresh);
   cout<<"Health is "<<R.getHealth()<<endl;
   cout<<"Level is "<<R.getLevel()<<endl;
  

    return 0;

}
