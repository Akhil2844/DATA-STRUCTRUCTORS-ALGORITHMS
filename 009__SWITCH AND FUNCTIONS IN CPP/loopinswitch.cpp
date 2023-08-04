  // in a infinite loop we have a switch case

#include<iostream>
using namespace std;
int main()
{
   
    while(true){
         int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;

        switch(num)
        {
            case 1:
            cout<<"First"<<endl;
            break;

            case 2:
            cout<<"Second"<<endl;
            break;

            case 3:
            cout<<"Third"<<endl;
            break;

            default :
            cout<<"No other cases"<<endl;
            break;
        }

        if(num == 2)
        {
            break;
        }

    }
  
}