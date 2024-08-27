/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        int min = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > min)
            {
                profit = max(profit, prices[i] - min);
            }
            else
            {
                min = prices[i];
            }
        }
        return profit;
    }
};
// @lc code=end
