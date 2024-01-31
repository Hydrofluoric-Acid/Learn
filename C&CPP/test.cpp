#include <iostream>
#include <vector>
using namespace std;

void dfs(int x, vector<int>& v, vector<int>& nums, vector<vector<int>>& ans) {
    if (x == nums.size()) {
        vector<int> t;
        for (int i = 0; i < nums.size(); i++) {
            if (v[i]) {
                t.push_back(nums[i]);
                cout << nums[i] << " ";
            }
        }
        cout << endl;
        ans.push_back(t);
    } else {
        v[x] = 0;
        dfs(x + 1, v, nums, ans);
        v[x] = 1;
        dfs(x + 1, v, nums, ans);
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> v(nums.size(), 0);
    dfs(0, v, nums, ans);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);
    return 0;
}
