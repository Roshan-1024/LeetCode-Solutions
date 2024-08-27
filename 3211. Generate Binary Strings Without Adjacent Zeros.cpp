//First Backtracking question did in 24 min 50 sec

class Solution {
public:
    void binString(int n, vector<string>& ans, string current){
        if(current.length() >= n){
            for(int j = 1; j < n; j++)
                if((current[j-1] == '0' || current[j+1] == '0') && current[j] == '0')
                    return;
            ans.push_back(current);
            return;
        }

        current += '1';
        binString(n, ans, current);
        current.pop_back();

        current += '0';
        binString(n, ans, current);
        current.pop_back();
    }

    vector<string> validStrings(int n) {
        string current = "";
        vector<string> ans;
        binString(n, ans, current);
        return ans;
    }
};