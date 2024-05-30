/*
 * @lc app=leetcode id=1071 lang=cpp
 *
 * [1071] Greatest Common Divisor of Strings
 */

// @lc code=start
class Solution {
public:
    int gcdOfIntegers(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    string gcdOfStrings(string str1, string str2) {
        string gcd = "";
        string small;
        string large;
        if(str1.size()<str2.size()){
            small = str1;
            large = str2;
        }
        else{
            small = str2;
            large = str1;
        }
        for(int i = 0 ; i<small.size() ; i++){
            if(small[i] == large[i]){
                gcd += small[i];
            }
            else{
                break;
            }
        }
        int gcdOfStringSize = gcdOfIntegers(str1.size(),str2.size());
        if(gcd.size()>gcdOfStringSize){
            int gcdSize = gcd.size();
            while(true){
                if(gcdSize == gcdOfStringSize){
                   break;
                }
                gcd.pop_back();
                gcdSize = gcd.size();
            }
        }
        if(gcd.size() == 0)
            return "";

// ok upto this point

        string tempGcd = gcd;
        int tempGcdSize = tempGcd.size();
        while(tempGcdSize < str1.size()){
            tempGcd+=gcd;
            cout<<tempGcd<<endl;
            tempGcdSize = tempGcd.size();
        }
        if(tempGcd != str1)
            return "";

        cout<<"tempgcd = str1";

        tempGcd = gcd;
        tempGcdSize = tempGcd.size();
        while(tempGcdSize < str2.size()){
            tempGcd+=gcd;
            tempGcdSize = tempGcd.size();
        }
        if(tempGcd != str2)
            return "";
        return gcd;
    }
};

// @lc code=end

