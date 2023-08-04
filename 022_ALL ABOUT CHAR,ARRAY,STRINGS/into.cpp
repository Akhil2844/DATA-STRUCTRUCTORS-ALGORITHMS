#include<iostream>
using namespace std;

int getLength(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout<<"Enter your name : "<<endl;
    cin>>name;
    // name[2]='\0';

    cout<<"Your Name is : "<<name<<endl;

    cout<<"Length : "<<getLength(name)<<endl;

    return 0;
}