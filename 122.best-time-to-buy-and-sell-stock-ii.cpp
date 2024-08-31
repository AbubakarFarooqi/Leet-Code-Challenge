/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        int buy = prices[0];
        // boundry conditions
        if (prices.size() == 1 || prices.size() == 0)
            return 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (i == 0)
            {
                if (prices[i] < prices[i + 1])
                    buy = prices[i];
            }
            else if (i == prices.size() - 1)
            {
                if (prices[i] > prices[i - 1])
                {
                    profit += prices[i] - buy;
                }
            }
            else
            {
                if (prices[i] <= prices[i + 1] && prices[i] <= prices[i - 1])
                    buy = prices[i];
                if (prices[i] >= prices[i + 1] && prices[i] > prices[i - 1])
                {
                    profit += prices[i] - buy;
                }
            }
        }
        return profit;
    }
};
// @lc code=end
