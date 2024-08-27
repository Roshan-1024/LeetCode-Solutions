class Solution {
public:
    int minPartitions(string n) {
        char x = '0';
        for(char c : n)
            if(c > x)   x = c;
        return x-48;
    }
};