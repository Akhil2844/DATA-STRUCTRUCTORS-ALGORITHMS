#include<iostream>
using namespace std;


// Function Signature
void Counting(int n)
{
    // Function Body
    for(int i=0;i<=n;i++)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the range: "<<endl;
    cin>>n;

    //Function Call
    Counting(n);

}