#include<iostream>
using namespace std;

bool isPalindrone(string& s,int i,int j)
{
    
    //base case
    if(i>j)
    {
        return true;

    }

    // processing
    if(s[i]!=s[j])
    {
        return false;
    }
    else
    {
        return isPalindrone(s,i+1,j-1);
    }

}
int main()
{
    string s="abbccbba";

    int ans = isPalindrone(s,0,s.length()-1);
    
    if(ans)
    {
        cout<<"Its a Palindrone "<<endl;
    }
    else
    {
        cout<<"Its not a Palindrone "<<endl;

    }
 return 0;



}