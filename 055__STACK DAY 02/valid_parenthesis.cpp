#include<iostream>
#include<stack>
using namespace std;

bool validparenthesis(string s)
{

    stack<char>a;

    for(int i=0;i<s.length();i++)
    {
      
       // opening bracket stack push
       // closing bracket stack top check pop

       char ch=s[i];
       
       if(ch=='[' || ch=='{' || ch=='(')
       {
        a.push(ch);
       }

       else
       {
        
        if(!a.empty())
        {
            char top=a.top();
             
             if((ch==']')&& (top=='[')  ||  (ch=='}') && (top=='{')  ||  (ch==')') && (top=='('))
             {
                a.pop();
             }
             else
             {
               return false;
             }

        
        }

        else
        {
              return false;
        }

       }

    }

    if(a.empty())
    {
        return true;

    }
    else
    {
        return false;
    }
}
int main()
{
   string str="[{(([)])}]";

   if(validparenthesis(str))
   {
    cout<<"Valid parenthesis "<<endl;
   }

   else
   {
    cout<<"Invalid parenthesis"<<endl;
   }


    return 0;
}