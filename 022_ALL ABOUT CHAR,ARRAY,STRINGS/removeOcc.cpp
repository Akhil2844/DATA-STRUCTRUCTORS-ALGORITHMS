#include<iostream>
#include<string>
using namespace std;

string removeAllOccurance(string &s,string &part)
{
   while(s.length()!=0 && s.find(part)<s.length())
   {
    s.erase(s.find(part),part.length());
   }     
   return s; 
}

int main()
{
    string s,part;
    cout<<"Enter the String : "<<endl;
    cin>>s;
    cout<<"Enter the part which you want to remove : "<<endl;
    cin>>part;
    cout<<"Remove All Occuranes : "<<removeAllOccurance(s,part);

}