class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;
        for (auto sentence = sentences.begin(); sentence != sentences.end(); sentence++){
            int count = 1;
            for(char *c = &(*sentence)[0]; *c != '\0'; c++)
                if(*c == ' ' && *(c-1) != ' ')
                    count++;
            if(count > maxCount)    maxCount = count;
        }
        return maxCount;
    }
};