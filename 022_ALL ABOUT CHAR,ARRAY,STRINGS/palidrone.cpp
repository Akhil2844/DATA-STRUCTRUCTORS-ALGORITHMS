#include<iostream>
using namespace std;


// To convert lower case character to upper case character
char lowerCase(char ch)
{
  if((ch>='a')&& (ch<='z'))
  {
    return ch;
  }
  else
  {
    char temp=ch-'A'+'a';
    return temp;
  }
}

// WE NEED ONLY UPPERCASE ,LOWER CASE,  AND INTEGERS 
bool isConsider(char ch)
{
    if((ch>='a')&&(ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
    {
        return 1;

    }
    else
    {
        return false;
    }
}

int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

bool isPalidrone(char name[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        if (isConsider(name[start])==false)
        {
            start++;
        }

        else if(isConsider(name[end])==false)
        {
            end--;
        }

        else if(lowerCase(name[start])!=(lowerCase (name[end])))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
int main()
{

char name[50];
cout<<"Enter your name : "<<endl;
cin>>name;
cout<<"Palidrone or not : "<<isPalidrone(name,getLength(name))<<endl;



}