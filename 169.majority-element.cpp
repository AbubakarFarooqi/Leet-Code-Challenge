/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
#include <cmath>
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int majorityThreshold = ceil(nums.size() / 2);
        unordered_map<int, int> counts;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     counts[nums[i]] = 0;
        // }
        for (int i = 0; i < nums.size(); i++)
        {
            counts[nums[i]] = counts[nums[i]] + 1;
            if (counts[nums[i]] > majorityThreshold)
                return nums[i];
        }
        return -1;
    }
};
// @lc code=end
