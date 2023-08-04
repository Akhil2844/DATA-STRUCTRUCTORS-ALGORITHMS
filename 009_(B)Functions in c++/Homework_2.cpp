// #include<iostream>
// using namespace std;

// int nthTerm(int a,int n ,int d)
// {
//    int ans=a+(n-1)*d;
//    return ans;
// }
// int main()
// {
//     int a,d,n;
//     cout<<"Enter the First term (a) "<<endl;
//     cin>>a;

//     cout<<"Enter the number of terms(n) "<<endl;
//     cin>>n;

//     cout<<"Enter the difference (d) "<<endl;
//     cin>>d;

//    int answer= nthTerm(a,n,d);
//    cout<<"THe nth term of an A.p is : "<<answer<<endl;


// }


#include<iostream>
using namespace std;

int Fibonacci(int n)
{
   int a=0,b=1;
   if(n==0){
    return a;
   }
   for(int i=2;i<=n;i++)
   {
    int value=a+b;
    a=b;
    b=value;
   }
   return b;
}
int main()
{
    int n;
    cout<<"Enter the term you want: "<<endl;
    cin>>n;
   int c= Fibonacci(n);
    cout<<"Answer is "<<c<<endl;
}