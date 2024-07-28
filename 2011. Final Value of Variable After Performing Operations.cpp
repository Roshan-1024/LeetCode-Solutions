class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        for (auto i = operations.begin(); i != operations.end(); ++i){
            if(*i == "++X" || *i == "X++")  count++;
            else    count--;
        }
        return count;
    }
};