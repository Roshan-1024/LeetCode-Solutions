class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0;
        for(int i = 0; i < words.size()-1; i++){
            string first = words[i];
            for(int j = i+1; j < words.size(); j++){
                string second = words[j];
                if(first[0] == second[1] && first[1] == second[0]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};