class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0, size = nums.size();
        for(int i = 0; i < size; i++){
            string revBin = "";
            int j = i;
            while(j > 0){
                if(j % 2 == 0)  revBin += '0';
                else    revBin += '1';
                j /= 2;
            }
            int count = 0;
            for(char* c = &revBin[0]; *c != '\0'; c++)
                if(*c == '1')   count++;
            if(count == k)  ans+=nums.at(i);
        }
        return ans;
    }
};