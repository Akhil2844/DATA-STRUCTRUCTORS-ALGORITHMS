#include <iostream>
#include <stack>
using namespace std;

bool reduntant(string &s)
{

    stack<char> a;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            a.push(ch);
        }

        else
        {

            if (ch == ')')
            {
                bool isReduntant = true;
                while (a.top() != '(')
                {
                    char top = a.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isReduntant = false;
                    }
                    a.pop();
                }

                if (isReduntant == true)
                {
                    return true;
                }
                a.pop();
            }
        }
    }

    return false;
}

int main()
{
    string s = "(a+b)";

    if (reduntant(s))
    {
        cout << "It has Reduntant brackets " << endl;
    }

    else
    {
        cout << "It has no reduntant brackets " << endl;
    }

    return 0;
}