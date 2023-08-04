 //   LOOPS


//  Q1 ---> PRINT 1 TO N NUMBERS

// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//  int i=1;
//  cout<<"Enter the range value"<<endl;
//  cin>>n;
//  cout<<"The range starts here :"<<endl;
//  while(i<=n)
//  {
    
//     cout<<i<<endl;
//     i++;
//  }

// }



//   Q2 ---->.PRINT SUM FROM 1 TO N

// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//  int i=1,sum=0;
//  cout<<"Enter the range value"<<endl;
//  cin>>n;
//  cout<<"The sum is:"<<endl;
//  while(i<=n)
//  {
//     sum=sum+i;
    
//     i++;
//  }
// cout<<sum<<endl;
// }




// Q3--->FIND THEE SUM OF ALL EVEN NUMBERS FROM 1 TO N
// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//  int i=1,sum=0;
//  cout<<"Enter the range value"<<endl;
//  cin>>n;
//  cout<<"The sum is:"<<endl;
//  while(i<=n)
//  {
//     if(i%2==0){
//      sum=sum+i;
//     }
// i++;
//  }
// cout<<sum<<endl;
// }


//  Q4---->GIVEN NUMBER IS PRIME OR NOT

#include<iostream>
using namespace std;
int main()
{
 int n;
 int i=2;
 cout<<"Enter the range value"<<endl;
 cin>>n;
while(i<n){
    if(n%i==0){
        cout<<"The number is not prime"<<endl;
        return 0;
    }
i++;
}
cout<<"The number is Prime";
return 0;
}