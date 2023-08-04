#include<iostream>
#include<string>
using namespace std;

bool checkInclusion(string &s1,string &s2)
{
    
    //character count array
    int count1[26]={0};

    for(int i=0;i<s1.length();i++)
    {
        char ch=s1[i];
        int number=0;
        number=ch-'a';
        count1[number]++;

    }

    // transverse s2 string in window of size s1 length and compare
    int i=0;
    int windowSize=s1.length();
    int count2[2]={0};

    //running for first window
    while(i<windowSize && i<s2.length())
    {
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count1,count2))
}

int main()

{
    string s1,s2;
    cout<<"Enter the string1 : "<<endl;
    cin>>s1;
    cout<<"Enter the string2 : "<<endl;
    cin>>s2;


}