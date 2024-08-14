class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans = 0;
        unordered_map<char, int> map;
        int size = s.length();
        for(int i = 0; i < size; i++)
            map[s[i]] = i;
        for(int i = 0; i < size; i++)
            map[t[i]] = abs(map[t[i]] - i);
        for(const pair<char, int>& pair : map)
            ans += pair.second;
        return ans;
    }
};