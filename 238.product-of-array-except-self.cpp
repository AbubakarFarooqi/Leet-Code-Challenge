/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        bool isOneZero  = false;
        int isOneZeroPosition = 0;
        bool isMoreThanOneZero = false;
        for(int i = 0 ;i<nums.size() ; i++){
            if(nums[i] != 0){
                product *= nums[i];
            }
            else{
                if(isOneZero){
                    isMoreThanOneZero = true;
                    break;
                }
                else{
                    isOneZero = true;
                    isOneZeroPosition = i;
                }
            }
        }
        vector<int> ans(nums.size());
        if(isMoreThanOneZero){
             ans.assign(nums.size(), 0);
            return ans;
        }
        if(isOneZero){
            ans.assign(nums.size(), 0);
            ans[isOneZeroPosition] = product;
            return ans;
        }
         for(int i = 0 ;i<nums.size() ; i++){
             ans[i] = (product/nums[i]);
        }
        return ans;
    }
};
// @lc code=end

