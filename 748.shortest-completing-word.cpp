/*
 * @lc app=leetcode id=748 lang=cpp
 *
 * [748] Shortest Completing Word
 */

// @lc code=start
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
           unordered_map<char, int> m;
        for (int i = 0; i < licensePlate.size(); i++)
        {
            char c = (char)tolower(licensePlate[i]);
            if((licensePlate[i] >=48 && licensePlate[i]<=57) || licensePlate[i] == ' ')
                continue;
            if (m.find(c) != m.end()){
                int count = m[c];
                count++;
                m[c] = count;
            }
            else{
                m[c] = 1;
            }
        }
        vector<string> acceptableWords;
        for(string w : words){
        unordered_map<char, int> temp(m);
            for(int i = 0; i<w.size() ; i++){
                if (temp.find(w[i]) != temp.end()){
                    temp[w[i]] -= 1;
                }
            }
            bool isAcceptable = true;
            for (const auto& pair : temp) {
                if(pair.second > 0){
                    isAcceptable = false;
                    break;
                }                
            }
            if(isAcceptable){
                acceptableWords.push_back(w);
            }
        }
        string shortestWord = acceptableWords[0];
        for(int i = 1 ; i<acceptableWords.size() ; i++){
            if(shortestWord.size() > acceptableWords[i].size())
                shortestWord = acceptableWords[i];
        }
        return shortestWord;
    }
};
// @lc code=end

