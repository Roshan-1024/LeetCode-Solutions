class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int ans = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int size = seats.size();
        for(int i = 0; i < size; i++)
            ans += abs(students[i] - seats[i]);
        return ans;
    }
};