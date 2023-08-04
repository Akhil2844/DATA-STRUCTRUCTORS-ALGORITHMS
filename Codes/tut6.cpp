//  BINARY AN DECIMAL NUMBERS

// Convert decimal into binary
// #include<iostream>
// #include<math.h>
// using namespace std;


// int main() {

//     int n;
//     cout<<"Enter the decimal number :"<<endl;
//     cin >> n;


//     int ans  = 0;
//     int i = 0;
//     while(n != 0 ) {

//         int bit  = n & 1;

//         ans = (bit * pow(10, i) ) + ans;

//         n = n >> 1;
//         i++;

//     }

//     cout<<" Answer is " << ans << endl;
//     return 0;
// }



//  Q-2 negative binary into decimal number
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     long long int n,N;
//     cout<<"Enter the negative decimal number:"<<endl;
//     cin>>n;
//     unsigned long long int i=0,ans=0;
//     if(n<0)
//     {
//         N=pow(2,16)+n;
//     }
//     cout<<N<<endl;
//    while(N)
//    {
//       int bit=(N&1);
//       ans=(bit*pow(10,i)+ans);
//       N=N>>1;
//       i++;
     
//    }
//    cout<<"The converted Binary Number is"<<ans<<endl;
// }



//  Q3--->  BINARY INTO DECIMAL
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Binary Number"<<endl;
    cin>>n;
    int i=0;
    int ans=0;

    while(n!=0)
    {
        int digit=n%10;
        ans=ans+pow(2,i)*digit;
        n=n/10;
   i++;

    }
    cout<<"The converted Decimal number is : "<<ans<<endl;
}