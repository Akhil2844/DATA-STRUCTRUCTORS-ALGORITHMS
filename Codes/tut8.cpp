#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // int num=2;

    // switch(num)
    // {
    //     case 1:
    //     cout<<"First"<<endl;
    //     break;

    //     case 2:
    //     cout<<"Second"<<endl;
    //     break;

    //     default:
    //     cout<<"value is wrong"<<endl;

    // }
    // return 0;

    // int num=1;
    // char ch='d';

    // switch(ch)
    // {
    //     case 'b':
    //     cout<<"First"<<endl;
    //     break;

    //     case 'd':
    //     switch(num)
    //     {
    //         case 1:
    //         cout<<"value of num is "<<num<<endl;
    //     }
    //     break;

    //     default:
    //     cout<<"value is wrong"<<endl;
    //     // Default case is not mandetory    




    // while (true) {
    //     // Some code...

    //     // Within the loop:
    //     char switchVariable;
    //     cout << "Enter a command: ";
    //     cin >> switchVariable;

    //     switch (switchVariable) {
    //         case 'e':
    //             break;  // Exit the loop
    //         case 's':
    //             // Handle case 's'
    //             break;
    //         case 'r':
    //             // Handle case 'r'
    //             break;
    //         default:
    //             // Handle other cases
    //             break;
    //     }

        // Some code...

    //     if (switchVariable == 'e') {
    //         break;  // Exit the loop
    //     }
    // }




//  CALCULATORS IN C++


// int a,b;

// char operation; 

// cout<<"Enter the value of a"<<endl;
// cin>>a;

// cout<<"Enter the value of b"<<endl;
// cin>>b;

// cout<<"Enter the operation"<<endl;
// cin>>operation;

// switch(operation)
// {
//     case '+':
//     cout<<"Add the value of a and b :"<<endl;
//     cout<<"Result : "<<a+b<<endl;
//     break;

//     case '-':
//     cout<<"Subtract the value of a and b :"<<endl;
//     cout<<"Result : "<<a-b<<endl;
//     break;

//     case '*':
//     cout<<"Multiply the value of a and b :"<<endl;
//     cout<<"Result : "<<a*b<<endl;
//     break;

//   case '/':
//     cout<<"Divide the value of a and b :"<<endl;
//     cout<<"Result : "<<a/b<<endl;
//     break;

//   case '%':
//     cout<<"Modules the value of a and b :"<<endl;
//     cout<<"Result : "<<a%b<<endl;
//     break;

//     default:
//     cout<<"Please enter a valid operation"<<endl;
// }

   
  


// Homework Question

int amount,n100,n50,n20,n1;
n100=n50=n20=n1=0;
cout<<"Enter the amount : "<<endl;
cin>>amount;

switch(amount>=100)
{
    case 1:
      n100=amount/100;
      amount-=n100*100;
      break;
}

switch(amount>=50)
{
  case 1:
  n50=amount/50;
  amount-=n50*50;
  
  
}

switch(amount>=20)
{
    case 1:
    n20=amount/20;
    amount-=n20*20;
   
    break;
}

switch(amount>=1)
{
    case 1:
    n1=amount/1;
    amount-=n1*1;
  

    break;
}

cout<<"The Hundred rupees notes are following : "<<n100<<endl;
cout<<"The Fifty rupees notes are following : "<<n50<<endl;
cout<<"The Twenty rupees notes are following : "<<n20<<endl;
cout<<"The one rupees are notes following : "<<n1<<endl;

  return 0;
}