#include<iostream>
using namespace std;
int main()
{
       char ch='d';
    int num=2;

    switch(ch)
    {
        case 'a':
        cout<<"First"<<endl;
        break;


        case 'b':
        cout<<"Second"<<endl;
        break;

        case 'd':
        switch(num)
        {
            case 2:
            cout<<"Akhil is great"<<endl;
        }
        break;

        default :
        cout<<"Entered character is wrong "<<endl;
    }
    return 0;
}