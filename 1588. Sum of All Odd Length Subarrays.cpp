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

//O(n) solution by me:
class Solution {
public:
    int sumOddLengthSubarrays(const vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        if (n % 2 == 0)
            for (int i = 0; i < n; i++)
                sum += (i + 1) * (n - i) / 2 * arr[i];
        else
            for (int i = 0; i < n; i++)
                sum += ((i + 1) * (n + 1) / 2 - 2 * ((i + 1) / 2) * (i / 2 + 1)) * arr[i];
        return sum;
    }
};

//Actual O(n) solution:
int sumOddLengthSubarrays(vector<int>& A) {
        int res = 0, n = A.size();
        for (int i = 0; i < n; ++i)
            res += ((i + 1) * (n - i) + 1) / 2 * A[i];
        return res;
}