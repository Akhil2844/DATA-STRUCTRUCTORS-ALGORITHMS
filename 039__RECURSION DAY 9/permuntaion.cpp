#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
    // Base case
    if (index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++) { // Start j from 'index' instead of 0
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);

        // Backtracking
        swap(nums[index], nums[j]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    vector<vector<int>> result = permute(nums);

    // Printing the permutations
    for (const auto& permute : result) {
        cout << "[";
        for (int i = 0; i < permute.size(); ++i) {
            cout << permute[i];
            if (i < permute.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
