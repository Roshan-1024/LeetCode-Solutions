class Solution {
public:
    int countTestedDevices(vector<int>& bp) {
        int tested = 0;
        int sub = 0;
        for(int i = 0; i < bp.size(); i++)
            if(bp[i] - sub > 0){
                tested++;
                sub++;
            }
        return tested;
    }
};