#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int age;
    int height;

    public:
    int getage()
    {
       return this->age; 
    }
};


int main()
{

Student Akhil;

cout<<"Sab sahi chl rha h "<<endl;

return 0;
}