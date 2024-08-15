class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;
        string original = to_string(x);
        string reversed = "";
        for(int i = original.length()-1; i >= 0; i--)
            reversed += original[i];
        if(original == reversed)    return true;
        return false;
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;
        string num = to_string(x);
        for(int i = 0; i < num.length()/2; i++)
            if(num[i] != num[num.length()-i-1])   return false;
        return true;
    }
};