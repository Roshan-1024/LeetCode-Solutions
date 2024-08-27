class Solution {
public:
    int maximum69Number (int num) {
        int reversed = reverseNum(num);
        int temp = reversed;
        for(int i = 0; reversed > 0; i++){
            if(reversed % 10 == 6)
                return reverseNum(temp + 3 * pow(10, i));
            reversed /= 10;
        }
        return num;
    }

    int reverseNum(int num){
        int reversed = 0;
        while(num > 0){
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return reversed;
    }
};

class Solution {
public:
    int maximum69Number (int num) {
        string x = to_string(num);
        for(int i = 0; i < x.length(); i++)
            if(x[i] == '6')
                return num + 3 * pow(10, x.length()-i-1);
        return num;
    }
};