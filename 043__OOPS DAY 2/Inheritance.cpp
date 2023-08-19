#include<iostream>
using namespace std;

class Human
{
   private:

   public:
   int age ;
   int height;
   int weight;

   int setAge(int age)
   {
     return this->age=age;;
   }

   void setWeight(int w)
   {
     this->weight=w;
   }


};

class Male:public Human
{
    
    public:
    string color;

    void sleep()
    {
        cout<<"I am sleeping "<<endl;
    }
};

int main()
{

    Male object1;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.age<<endl;

    cout<<object1.setAge(13)<<endl;
    object1.setWeight(89);
   

   cout<<object1.color<<endl;
   object1.sleep();


    return 0;
}