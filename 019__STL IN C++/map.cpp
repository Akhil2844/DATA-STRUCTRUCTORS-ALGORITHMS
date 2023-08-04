#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="Akhil";
    m[2]="Kumar";
    m[13]="Love_Babbar";

    m.insert({5,"Bheem"});
     
     cout<<"Before Erase -> "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" - "<<i.second<<endl;
    }

    m.erase(13);

    cout<<"After Erase -> ";
    cout<<endl;
     for(auto i:m)
    {
        cout<<i.first<<" - "<<i.second<<endl;
    }
    cout<<endl;


    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }

}