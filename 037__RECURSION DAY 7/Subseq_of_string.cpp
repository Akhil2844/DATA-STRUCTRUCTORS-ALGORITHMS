#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string s, string output, int index, vector<string>& ans)
{
    // base case
    if (index >= s.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(s, output, index + 1, ans);

    // include
    char element = s[index];
    output.push_back(element);
    solve(s, output, index + 1, ans);
}

vector<string> subsequences(string& s)
{
    vector<string> ans;
    string output;
    int index = 0;
    solve(s, output, index, ans);
    return ans;
}

int main()
{
    string s = "abcd";
    vector<string> result = subsequences(s);

    // Printing the subsets
    for (const auto& subsequence : result) {
        cout << "[";
        for (int i = 0; i < subsequence.length(); ++i) {
            cout << subsequence[i];
            if (i < subsequence.length() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
