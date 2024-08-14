//First solution, O(M*N^2)
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        // m rows & n cols
        int m = bank.size();
        int n = bank[0].length();
        int ans = 0;
        for(int i = 0; i < m-1; i++){
            int current = 0, next = 0;
            for(int j = 0; j < n; j++){
                if(bank[i][j] == '1')   current++;
            }
            for(int k = i+1; k < m; k++){
                for(int l = 0; l < n; l++){
                    if(bank[k][l] == '1')   next++;
                }
                if(next != 0)   break;
            }
            ans += current * next;
        }
        return ans;
    }
};

//Second Solution, O(N^2)
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0, curr;
        int ans = 0;
        for(string str : bank){
            curr = 0;
            for(char c : str){
                if(c == '1')    curr++;
            }
            if(curr != 0){
                ans += prev * curr;
                prev = curr;
            }
        }
        return ans;
    }
};