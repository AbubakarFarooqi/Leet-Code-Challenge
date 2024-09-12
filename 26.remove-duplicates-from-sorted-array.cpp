/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> mp;
        for (int i : nums)
        {
            mp.insert(i);
        }
        int count = 0;
        for (int i : mp)
        {
            nums[count] = i;
            count++;
        }
        // count;
        return count;
    }
};
// @lc code=end
