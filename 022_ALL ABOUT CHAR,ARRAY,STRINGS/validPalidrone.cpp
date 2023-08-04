#include <Iostream>
#include<string>
using namespace std;

// To convert upper case character to lower case character
char lowerCase(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// WE NEED ONLY UPPERCASE ,LOWER CASE,  AND INTEGERS
bool isConsider(char ch)
{
    if ((ch >= 'a') && (ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    {
        return false;
    }
}

bool checkPalidrone(string &s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start <= end)
    {

        if ((s[start]) != ((s[end])))
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

bool isPalidrone(string &s)
{
    // faltu character hatao
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isConsider(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    //  to convert lowerCase
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = lowerCase(temp[i]);
    }

    return checkPalidrone(temp);
}

int main()
{
    string s;
    cout << "Enter the string : " << endl;
    cin >> s;

    cout << "Palidrone or not : " << isPalidrone(s) << endl;
    return 0;
}