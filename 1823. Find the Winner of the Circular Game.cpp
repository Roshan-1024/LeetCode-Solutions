//O(n^2)
//Came up with with solution after 1 day (4+ hrs), which somehow works (idk how)
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> friends(n);
        iota(friends.begin(), friends.end(), 1);
        return winner(friends, k, k-1);
    }

    int winner(vector<int>& friends, const int& k, int prev_k){
        if (friends.size() == 1)    return friends[0];
        int i;
        for(i = prev_k; i < friends.size(); i += k-1){
            if (k == 0 && i == friends.size()-1){
                return friends[0];
            }
            if (friends.size() == 1)    return friends[0];
            friends.erase(friends.begin()+i);
        }
        prev_k = i - friends.size();
        return winner(friends, k, prev_k);
    }
};