#include<iostream>
#include<cstring>

using namespace std;
class Hero
{


    private:
    int health;

    public:
    char *name;
    char level;

    // constructor called
    Hero()
{
    cout<<"Simple Constructor Called "<<endl;
    name=new char[100];
}






// // copy constructor
Hero(Hero& temp)
{
    // deep copy
    cout<<"Copy constructor called "<<endl;
    

     char*ch=new char[100];
     strcpy(ch,temp.name);
     this->name=ch;

    this->health=temp.health;
    this->level=temp.level;
}




    void print()
    {
        cout<<endl;
        cout<<"[ Name : "<<this->name<<" ,";
        cout<<" Health : "<<this->health<<" ,";
        cout<<" Level : "<<this->level<<" ] ";
        cout<<endl;
        cout<<endl;
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
    
    void setName(char name[])
    {
      strcpy(this->name,name);
    }
    };

  

int main()
{
  Hero hero1;
  hero1.setHealth(70);
  hero1.setLevel('A');

  char name[7]="Akhilk";
  hero1.setName(name);
//   hero1.print();/


//   default copy constructor 
Hero hero2(hero1);
// Hero hero2=hero1;

// hero2.print();

hero1.name[0]='G';

hero1.print();
hero2.print();

// assignemnt operator
hero1=hero2;
hero1.print();
hero2.print();

  

    return 0;

}
