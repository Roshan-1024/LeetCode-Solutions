class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int len = s.length();
        int balance = 0;
        for(int i = 0; i < len; i++){
            if(s[i] == 'R')     balance++;
            else    balance--;
            if(balance == 0)    ans++;
        }
        return ans;
    }
};