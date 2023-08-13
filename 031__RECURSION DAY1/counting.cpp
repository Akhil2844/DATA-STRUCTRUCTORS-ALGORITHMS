#include<iostream>
using namespace std;

void count(int n)
{
    if(n==0)
    {
        return ;
    
    }

    // cout<<n<<endl;   // tail recursion   

    // Recursive Function
    count(n-1);

     cout<<n<<endl;    // head recursion
}
int main()
{
    int n;
    cin>>n;

    cout<<endl;

    count(n);

    return 0;
}