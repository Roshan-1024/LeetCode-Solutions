class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int len = boxes.length();
        for(int i = 0; i < len; i++){
            int count = 0;
            for(int j = 0; j < len; j++)
                if(boxes[j] == '1')
                    count += abs(j-i);
            ans.push_back(count);
        }
        return ans;
    }
};

//Find the O(n) solution too.