#include<iostream>
using namespace std;
class Hero
{


    private:
    int health;

    public:
    char level;
    static int timetoComplete;

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


    // Static functions



    static int random()
    {
        return timetoComplete;
    }

    ~Hero()
    {
        cout<<"Destructor bahi called "<<endl;
    }
    
    };

    int Hero::timetoComplete = 5;


int main()
{
   // static function
    cout<<Hero::random()<<endl;
  

  // static keyword
  cout<<Hero::timetoComplete<<endl;

  Hero a;
  cout<<a.timetoComplete<<endl;

  Hero b;
  b.timetoComplete=10;
  cout<<a.timetoComplete<<endl;
  cout<<b.timetoComplete<<endl;




return 0;

}