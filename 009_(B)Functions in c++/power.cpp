#include<iostream>
#include<math.h>
using namespace std;

int power(int a, int b)
{

    // cout<<a<<endl;     <******** This will throw an error because function cannot access other function local variable
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;

    cout<<"Enter the value of b "<<endl;
    cin>>b;

    int c=power(a,b);
    cout<<"Answer is : "<<c<<endl;
}