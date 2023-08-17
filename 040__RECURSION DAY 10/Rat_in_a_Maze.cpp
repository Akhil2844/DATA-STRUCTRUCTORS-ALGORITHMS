#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> m, vector<vector<int>> visited, int n) {
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1) {
        return true;
    } else {
        return false;
    }
}


void solve(vector<vector<int>>& m,int n,vector<string>& ans,int x,int y,vector<vector<int>> visited,string path)
{
    // base case
    if((x==n-1) && (y==n-1))
    {
         ans.push_back(path);
         return;
    }

    visited[x][y]=1;
  

  // 4 choices

  // down
  int newx=x+1;
  int newy=y;
  if(isSafe(newx,newy,m,visited,n))
  {
    path.push_back('D');
    solve(m,n,ans,newx,newy,visited,path);
    path.pop_back();
  }

  // up
  newx=x-1;
  newy=y;
  if(isSafe(newx,newy,m,visited,n))
  {
    path.push_back('U');
    solve(m,n,ans,newx,newy,visited,path);
    path.pop_back();

  }


// right
newx=x;
newy=y+1;
if(isSafe(newx,newy,m,visited,n))
{
    path.push_back('R');
    solve(m,n,ans,newx,newy,visited,path);
    path.pop_back();
}


//  left
newx=x;
newy=y-1;
if(isSafe(newx,newy,m,visited,n))
{
    path.push_back('L');
    solve(m,n,ans,newx,newy,visited,path);
    path.pop_back();
}



    visited[x][y]=0;
}

vector<string>findPath(vector<vector<int>>&m,int n)
{
    vector<string> ans;
    if(m[0][0]==0)
    {
        return ans;
    }

    int srcx=0;
    int srcy=0;
    vector<vector<int>> visited=m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }

    string path="";

    solve(m,n,ans,srcx,srcy,visited,path);

    sort(ans.begin(),ans.end());
    return ans;

}

int main() {
    int n = 4; // Assuming a 4x4 matrix for the provided input

    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> result = findPath(m, n);

    if (result.empty()) {
        cout << "No paths found." << endl;
    } else {
        cout << "Possible paths:\n";
        for (const string &path : result) {
            cout << path << "\n";
        }
    }

    return 0;
}
