class Solution {
public:
    int fib(int n) {
        if(n == 0)  return 0;
        if(n == 1)  return 1;
        static unordered_map<int, int> map;
        auto it = map.find(n);
        if(it != map.end()){
            return map[n];
        }
        map[n] = fib(n-1) + fib(n-2);
        return map[n];
    }
};