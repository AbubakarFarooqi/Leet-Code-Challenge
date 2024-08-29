/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        vector<int> auxArr;
        int zeroCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zeroCount++;
            }
            else
                auxArr.push_back(nums[i]);
        }
        for (int i = 1; i <= zeroCount; i++)
        {
            auxArr.push_back(0);
        }
        nums = auxArr;
    }
};
// @lc code=end
