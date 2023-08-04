// FUNCTIONS IN C++
//   FUNCTIONS IN C++
#include<iostream>
using namespace std;

// int power(int a,int b)

// {

    // cout<<a<<endl;        ********* It throws an error because one function cannnot access other function local variable
    // int a;
    // int b;
    // cout<<"Enter the values of a and b : "<<endl;
    // cin>>a>>b;
// int ans=1;
// for(int i=1;i<=b;i++)
// {
//     ans=ans*a;
// }
// return ans;
// }
// int main(){
//     int a;
//     int b; 
//     cout<<"Enter the values of a and b : "<<endl;
//     cin>>a>>b;
// int answer=power(a,b);
// cout<<"Answer is "<<answer<<endl;

// // int p=power();
// // cout<<"Answer is : "<<p<<endl;
// return 0;
// }




// Q2   EVEN ODD FUNCTION

// bool isEven(int a)
// {
//     if(a&1)
//     {
//         return 0;
//     }
//     return 1;
// }
//     int main()
// {
//     int num;
//     cout<<"Enter the Number : "<<endl;
//     cin>>num;

//     if (isEven(num)){
//         cout<<"Number is Even"<<endl;

//     }
//     else{
//         cout<<"Number is odd"<<endl;
//     }
// }


//  nCr calculate
// int factorial(int n)
// {
//    int  fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }

// int nCr(int n , int r)
// {
//     int num=factorial(n);
//     int den=factorial(r)*factorial(n-r);
//     int ans=num/den;
//     return ans;
// }

// int main(){
// int n,r;
// cout<<"Enter the value of n : "<<endl;
// cin>>n;
// cout<<"Enter the value of r : "<<endl;
// cin>>r;

// int ANS=nCr(n,r);
// cout<<"Answer is  : "<<ANS<<endl;
// }



// PRINT COUNTING 1 T0 N

// Function Signature
// void PrintCounting(int n)
// {

//     // Function Body
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<"  ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the range value : "<<endl;
//     cin>>n;

//     cout<<"Following range of numbers are : "<<endl;

//     // Function Call
//     PrintCounting(n);
// }



// NUMBER IS PRIME OR NOT
// bool isPrime(int n)
// {

// for( int i=2;i<n;i++)
// {
//   if((n%i)==0)
//   {
//     return 0;
//   }
  
//   }
//   return 1;
// }


// int main()
// {
//     int n;
//     cout<<"Enter the number : "<<endl;
//     cin>>n;
 
 
//     if(isPrime(n))
//     {
//         cout<<"Number is Prime"<<endl;
//     }
//     else
//     cout<<"Number is not Prime"<<endl;
// }




//  PASS BY VALUE
// void dummmy(int n)
// {
//     n++;
//     cout<<"The value of n is : "<<n<<endl;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : "<< endl;
//     cin>>n;

//     dummmy(n);
//     cout<<"The value of n is : "<<n<<endl;
// }


// OUTPUT QUESTIONS
// int update(int a)
// {
//     a-=5;
//     return a;

// }
// int main()
// {
//     int a=15;
//     update(a);
//     cout<<a<<endl;
// }


// void update(int a){
//     a=a/2;
// }
//     int main()
//     {
//         int a=10;
//         update(a);
//         cout<<a<<endl;
//     }




//  Homework questions

// int Fibconni(int n){
//     int a=0,b=1;
//     int value;
//     for(int i=2;i<=n;i++){
//      int value=a+b;
//      a=b;
//      b=value;
//     }
//     return b;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     int c=Fibconni(n);
//     cout<<"The nth Fibconni number is : "<<c<<endl;



// }


int main()
{
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;

    cout<<"Totl no of set bits in a and b"<<
}