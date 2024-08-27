//came up after more than 1.5 hours
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string& word : words){
            unordered_map<char, char> map1, map2;   //Two maps for bidirectional character mapping
            bool correct = true;
            int counter = 0;
            for(int i = 0; i < pattern.length(); i++){
                if(map1.find(pattern[i]) == map1.end() && map2.find(word[i]) == map2.end()){//no connections at all
                    map1[pattern[i]] = word[i];
                    map2[word[i]] = pattern[i];
                }
                else{//one of them has connection    OR    both of them have connection
                    if(map1.find(pattern[i]) != map1.end()){        //map1 has connection
                        if(map1[pattern[i]] != word[i]){    //does it not match?
                            correct = false;
                            break;
                        }
                    }
                    else if(map2[word[i]] != pattern[i]){
                        //map2 has connection (else)       AND       does it not match? (nested if)
                        correct = false;
                        break;
                    }
                }
            }
            if(correct) ans.push_back(word);
        }
        return ans;
    }
};

//Elaborate solution
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string& word : words){
            unordered_map<char, char> map1, map2;
            bool correct = true;
            int counter = 0;
            for(int i = 0; i < pattern.length(); i++){
                if(map1.find(pattern[i]) == map1.end() && map2.find(word[i]) == map2.end()){
                    map1[pattern[i]] = word[i];
                    map2[word[i]] = pattern[i];
                }
                else{
                    if(map1.find(pattern[i]) != map1.end()){
                        if(map1[pattern[i]] == word[i]){
                            continue;
                        }
                        else{
                            correct = false;
                            break;
                        }
                    }
                    else{
                        if(map2[word[i]] == pattern[i]){
                            continue;
                        }
                        else{
                            correct = false;
                            break;
                        }
                    }
                }
            }
            if(correct) ans.push_back(word);
        }
        return ans;
    }
};



//Also understand this solution LATER...
vector<string> findAndReplacePattern(vector<string> words, string p) {
    vector<string> res;
    for (string w : words) if (F(w) == F(p)) res.push_back(w);
    return res;
}

string F(string w) {
    unordered_map<char, int> m;
    for (char c : w) if (!m.count(c)) m[c] = m.size();
    for (int i = 0; i < w.length(); ++i) w[i] = 'a' + m[w[i]];
    return w;
}