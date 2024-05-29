class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string bigString,smallString;
        if(word1.size() >= word2.size()){
            bigString = word1;
            smallString = word2;
        }
        else{
            bigString = word2;
            smallString = word1;
        }
        string result = "";
        for(int i = 0 ; i<smallString.size();i++){
            result += word1[i];
            result += word2[i];
        }
        for(int i = smallString.size() ; i<bigString.size();i++){
            result += bigString[i];
        }
        return result;
    }
};