/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int> zeroPositions;
         if(n == 0)
                        return true;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if(flowerbed[i] == 0){
                zeroPositions.push_back(i);
            }
        }
        for (int i = 0; i < zeroPositions.size(); i++)
        {
            if(flowerbed.size() == 1){
                n--;
                if(n == 0)
                        return true;
            }
            if(zeroPositions[i] == 0){
                if(flowerbed[zeroPositions[i]+1] == 0){
                    flowerbed[zeroPositions[i]] = 1;
                    n--;
                    if(n == 0)
                        return true;
                }
            }
            else if(zeroPositions[i] == flowerbed.size() -1){
                if(flowerbed[zeroPositions[i]-1] == 0){
                    flowerbed[zeroPositions[i]] = 1;
                    n--;
                      if(n == 0)
                        return true;
                }
            }
            else{
                if(flowerbed[zeroPositions[i]+1] == 0 && flowerbed[zeroPositions[i]-1] == 0){
                    flowerbed[zeroPositions[i]] = 1;
                    n--;
                      if(n == 0)
                        return true;
                }
            }
        }
     
        return false;
        

    }
};
// @lc code=end

