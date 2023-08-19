#include<iostream>
using namespace std;

class Human
{
   private:

//    public:
//    int height;
//    int weight;

   public:
   int weight;
   
//    protected:
//    int height;

private:
int height;

   private:
   int age ;


   int setAge(int age)
   {
     return this->age=age;;
   }

   void setWeight(int w)
   {
     this->weight=w;
   }


};

// class Male:public Human
// class Male:protected Human
// class Male:private Human 
// class Male:public Human
// class Male : protected Human
// class Male:private Human
// class Male: private Human
// class Male:protected Human
class Male:public Human

{
    
    public:
    string color;

    void sleep()
    {
        cout<<"I am sleeping "<<endl;
    }

    int getHeight()
    {
        // return this->height; 
    }
};

int main()
{

    Male m1;
    // cout<<m1.height<<endl;
    cout<<m1.getHeight()<<endl;

    return 0;
}