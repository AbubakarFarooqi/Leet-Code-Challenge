#include <algorithm>
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto max_it = max_element(candies.begin(), candies.end());
         int max_value = *max_it;
         vector<bool> result(candies.size());
    for(int i = 0 ; i<candies.size() ; i++){
        if(candies[i]+extraCandies>=max_value){
            result[i] = true;
        }
        else{
            result[i] = false;
        }
    }
    return result;
    }
   
};