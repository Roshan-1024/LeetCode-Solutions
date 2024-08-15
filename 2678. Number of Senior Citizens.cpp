class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(string item : details){
            int age = 10*(int(item[11])-48) + int(item[12])-48;
            if(age > 60)    ans++;
        }
        return ans;
    }
};