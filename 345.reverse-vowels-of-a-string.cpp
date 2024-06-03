class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        vector<int> vowelPositions;
        vector<char> vowelChars;
        for(int i  = s.size() -1 ; i >= 0 ; i--){
            if(isVowel(s[i])){
                vowelPositions.push_back(i);
                vowelChars.push_back(s[i]);
                }

        }
        for(int i  = 0 ; i < vowelPositions.size() ; i++){
            s[vowelPositions[i]] = vowelChars[vowelPositions.size()-1-i]; 
        }
        return s;
    }
};