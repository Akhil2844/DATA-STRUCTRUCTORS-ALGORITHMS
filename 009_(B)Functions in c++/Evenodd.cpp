#include<iostream>
using namespace std;

bool isEven(int num)
{
    if(num&1){
        return 0;
    }
    return 1;
}
int main()
{
    int num;
    cout<<"Enter the Number : "<<endl;
    cin>>num;

   if(isEven(num))
   {
    cout<<"Number is Even "<<endl;
   }
   else{
    cout<<"Number is odd"<<endl;
   }

}