#include<iostream>
#include<string>
using namespace std;

void reverseString(string& s,int i,int j)
{
    cout<<"Call recieved as "<<s<<endl;

    //base case
    if(i>j)
    {
        return ;
    }

     swap(s[i],s[j]);
     i++;
     j--;

     //recursive call
     reverseString(s,i,j);
}
int main()
{

    string s="Akhil";

    reverseString(s,0,s.length()-1);
    cout<<"Reverse String is : "<<s<<endl;
    return 0;
}