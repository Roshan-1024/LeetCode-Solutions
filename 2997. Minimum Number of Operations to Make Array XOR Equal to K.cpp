class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        //find xor of all the elems.
        int xorAll = 0;
        for(int elem : nums){
            xorAll ^= elem;
        }
        int c1 = countOnes(xorAll);
        int c2 = countOnes(k);
        if(xorAll == k) return 0;
        return countOnes(xorAll ^ k);
    }

    int countOnes(int temp){
        int count = 0;
        while(temp > 0){
            if(temp % 2 == 1)   count++;
            temp /= 2;
        }
        return count;
    }
};