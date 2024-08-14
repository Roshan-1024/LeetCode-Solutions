class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string alphabets[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> morse;
        for(string word : words){
            string str = "";
            for(char c : word){
                str += alphabets[c-97];
            }
            morse.push_back(str);
        }

        //removing duplicates
        sort(morse.begin(), morse.end());
        auto it = unique(morse.begin(), morse.end());
        morse.erase(it, morse.end());
        return morse.size();
    }
};