class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int size = arr.size();
        for(int k = 1; k <= size; k += 2)
            for(int i = 0; i < size - k + 1; i++)
                for(int j = i; j < i + k; j++)
                    sum += arr[j];
        return sum;
    }
};

//Find O(n) and O(n^2) solutions as well.