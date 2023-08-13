//  *********** FIBONACCI SERIES USING FOR LOOP

// #include<iostream>
// using namespace std;

// int fibonacci(int n)
// {
//     if(n==1||n==2)
//     {
//         return n-1;
//     }
//      int ans;
//      int a=0;
//         int b=1;
//      for(int i=3;i<=n;i++)
//      {

//         ans=a+b;
//         a=b;
//         b=ans;

//      }
//      return ans;

// }
// int main()
// {

//     int n;
//     cin>>n;

//     int ans=fibonacci(n);

//     cout<<"Nth fibonacci number is "<<ans<<endl;
//     return 0;

// }

// ******************* FIBONACCI SERIES USING RECURSION
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int ans = fib(n - 1) + fib(n - 2);

    return ans;
}
int main()
{
    int n;
    cin >> n;

    int ans = fib(n);
    cout << "Nth fibonacci number is " << ans << endl;
}