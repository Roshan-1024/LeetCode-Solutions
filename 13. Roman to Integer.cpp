class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        cout << s.length() << endl;
        for(char* p = &s[0]; *p != '\0'; p++){
            if(*p == 'M')   ans += 1000;
            else if(*p == 'C' && *(p+1) == 'M'){
                ans += 900;
                p++;
            }
            else if(*p == 'D')  ans += 500;
            else if(*p == 'C' && *(p+1) == 'D'){
                ans += 400;
                p++;
            }
            else if(*p == 'C')  ans += 100;
            else if(*p == 'X' && *(p+1) == 'C'){
                ans += 90;
                p++;
            }
            else if(*p == 'L')  ans += 50;
            else if(*p == 'X' && *(p+1) == 'L'){
                ans += 40;
                p++;
            }
            else if(*p == 'X')  ans += 10;
            else if(*p == 'I' && *(p+1) == 'X'){
                ans += 9;
                p++;
            }
            else if(*p == 'V')  ans += 5;
            else if(*p == 'I' && *(p+1) == 'V'){
                ans += 4;
                p++;
            }
            else if(*p == 'I')  ans += 1;
        }
        return ans;
    }
};



//I know bad code, trying to access the (i+1)th term which can lead to undefined behaviour