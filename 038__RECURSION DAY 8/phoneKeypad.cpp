#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string s,string output,int index,vector<string>&ans,string mapping[])
{
    // base case
    if(index>=s.length())
    {
        ans.push_back(output);
        return ;
    }

    int number=s[index]-'0';
    string value=mapping[number];

    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(s,output,index+1,ans,mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string& s)
{
    vector <string> ans;
    if(s=="")
    {
        return ans;
    }

    string output;
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(s,output,index,ans,mapping);
    return ans;

}


int main()
{
    string s={"23"};
     vector<string> result = letterCombinations(s);

    // Printing the subsets
    for (const auto& letterCombinations : result) {
        cout << "[";
        for (int i = 0; i < letterCombinations.length(); ++i) {
            cout << letterCombinations[i];
            if (i < letterCombinations.length() - 1) {
                cout << ",";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}

