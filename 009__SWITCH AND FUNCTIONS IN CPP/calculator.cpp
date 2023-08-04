#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char operations;

    cout<<" Enter the value of number a: "<<endl;
    cin>>a;

    cout<<"Enter the value of number b: "<<endl;
    cin>>b;

    cout<<"Enter the operation Which you want: "<<endl;
    cin>>operations;

    switch (operations)
    {
        case '+':
        cout<<"Add the numbers"<<endl;
        cout<<"Result: "<<a+b<<endl;
        break;
    
        case '-':
        cout<<"Subtract the numbers"<<endl;
        cout<<"Result: "<<a-b<<endl;
        break;
    
        case '*':
        cout<<"Multiply the numbers"<<endl;
        cout<<"Result: "<<a*b<<endl;
        break;

        case '/':
        cout<<"Divide the numbers"<<endl;
        cout<<"Result: "<<a/b<<endl;
        break;
    
        case '%':
        cout<<"Remainder of the numbers"<<endl;
        cout<<"Result: "<<a%b<<endl;
        break;
    
    
    }
}