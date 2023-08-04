// Conditionals

 //  Q1 if else number is positive negative zero

// #include<iostream>
// using namespace std;
// int main()
// {
//  int a;
//  cout<<"Enter the value of a is"<<endl;
//  cin>> a;

//  if(a>0){
//      cout<<"The number is positive"<<endl;
//  }
//  else if(a<0)
//  {
//     cout<<"The numberis negative"<<endl;
//  }
// else
// {
// cout<<"The number is zero";
// }

// }



// PROGRAM TO COMPARE TWO NUMBERS
// #include<iostream>
// using namespace std;
// int main()
// {
//  int a,b;
//  cout<<"Enter the value of a is"<<endl;
//  cin>> a;

// cout<<"Enter the value of b is"<<endl;
//  cin>> b;

//  if(a>b){
//      cout<<"The number a is greater than b"<<endl;
//  }
 
// else
// {
// cout<<"The number b is greater than a";
// }

// }


//   HOMEWORK QUESTION
// #include<iostream>
// using namespace std;
// int main()
// {
//  int a=24;
 
//  if(a>20){
//      cout<<"Love"<<endl;
//  }
 
// else if(a==24)
// {
//      cout<<"Lovely"<<endl;
//  }

//  else
// {
//     cout<<"Babbar";
// }
// cout<<a;
// }



// HOMEWORK QUESTION
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"The value of a is"<<endl;
    cin>>a;

    if((a>='A')&&(a<='Z')){
        cout<<"This is a upper case";
    }

    else if((a>='a')&&(a<='z')){
        cout<<"This is a lower case";
    }

    if((a>='0')&&(a<='9')){
        cout<<"This is a digit";
    }
}