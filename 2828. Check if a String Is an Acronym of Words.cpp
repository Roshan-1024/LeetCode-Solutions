class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string str = "";
        int size = words.size();
        if(size != s.length())  return false;
        for(int i = 0; i < size; i++)
            str += words[i][0];
        return str == s ? true : false;
    }
};