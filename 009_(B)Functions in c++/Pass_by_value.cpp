#include<iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout<<"The value of n is "<<n<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    dummy(n);
    cout<<"The value of n is "<<n<<endl;
}