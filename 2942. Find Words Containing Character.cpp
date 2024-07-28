class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int i = 0;
        int size = words.size();
        while(i < size){
            for(int j = 0; j < words.at(i).length(); j++){
                if((words.at(i))[j] == x){
                    ans.push_back(i);
                    break;
                }
            }
            i++;
        }
        return ans;
    }
};