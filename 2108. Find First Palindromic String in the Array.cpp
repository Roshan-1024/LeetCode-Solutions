class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string w;
        for(auto word = words.begin(); word != words.end(); word++){
            w = *word;
            string reversed = "";
            int size = w.length();
            for(int i = size-1; i >= 0; i--){
                reversed += w[i];
            }
            if(w == reversed){
                return w;
            }
        }
        return "";
    }
};