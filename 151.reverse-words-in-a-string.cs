class Solution {
public string ReverseWords(string s) {
        string[]  y = s.Split(" ");
        string res = "";
        for(int i = y.Length -1  ; i>=0 ; i--){
            if(y[i]!=""){
            Console.WriteLine("-"+y[i]+"-");
                res += y[i];
            if(i != 0)
                res += " ";
            }
        }
        if(res[res.Length-1] == ' '){
            // Convert the string to a StringBuilder
        StringBuilder sb = new StringBuilder(res);

        // Remove the character at the specified index
        sb.Remove(res.Length-1, 1);
            res = sb.ToString();
        }
        return res;
    }
};