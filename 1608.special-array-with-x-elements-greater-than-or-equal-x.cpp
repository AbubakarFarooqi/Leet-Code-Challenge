/*
 * @lc app=leetcode id=1608 lang=cpp
 *
 * [1608] Special Array With X Elements Greater Than or Equal X
 */

// @lc code=start
class Solution {
public:
    int specialArray(vector<int>& nums) {
        int largest = nums[0];
        for(int i = 1 ; i<nums.size() ; i++){
            if(largest < nums[i])
                largest = nums[i];
        }
        for (int i = 0; i <= largest; i++){
            int count = 0;
            for(int j = 0 ; j<nums.size() ; j++){
                if(nums[j] >= i)
                    count++;
            }
            if(count == i)
                return i;
        }
        return -1;
    }
};
// @lc code=end

