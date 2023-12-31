#include <iostream>
#include <vector>
using namespace std;

int maxLength(vector<int> &nums, int i, bool flag)
{
    if (i == nums.size())
    {
        return 0;
    }
    if ((flag && nums[i] < nums[i - 1]) || (!flag && nums[i] > nums[i - 1]))
    {
        return maxLength(nums, i + 1, !flag) + 1;
    }
    else
    {
        return maxLength(nums, i + 1, flag);
    }
}

int wiggleMaxLength(vector<int> &nums)
{
    if (nums.size() < 2)
    {
        return nums.size();
    }
    return max(maxLength(nums, 1, true) + 1, maxLength(nums, 1, false) + 1);
}

int main()
{
    vector<int> nums{1, 7, 4, 9, 1, 5};
    cout << wiggleMaxLength(nums) << endl; // Output: 6
    return 0;
}
