#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s)
{
    int lastSpaceIndex = -1;
    int n = s.size();
    for (int i = 0; i <= n; i++)
    {
        if (i == n || s[i] == ' ')
        {
            int start = lastSpaceIndex + 1;
            int end = i - 1;
            while (start < end)
            {
                swap(s[start++], s[end--]);
            }
            lastSpaceIndex = i;
        }
    }
    return s;
}
int main()

{
    string s;
    cout << "Enter the string : " << endl;
    getline(cin, s);

    cout << "Reverse Words : " << reverseWords(s) << endl;
    return 0;
}