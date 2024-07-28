class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftArr, rightArr, ans;
        int size = nums.size();
        int i = 0;

        //Set intial values to 1  
        while(i < size){
            leftArr.push_back(1);
            rightArr.push_back(1);
            i++;
        }

        //Construct left array
        i = 1;
        while(i < size){
            leftArr.at(i) = leftArr.at(i-1) * nums.at(i-1);
            i++;
        }

        //Construct right array
        i = size-2;
        while(i >= 0){
            rightArr.at(i) = rightArr.at(i+1) * nums.at(i+1);
            i--;
        }
        //Multiply corresponding elements
        i = 0;
        while(i < size){
            ans.push_back(leftArr.at(i) * rightArr.at(i));
            i++;
        }
        return ans;
    }
};