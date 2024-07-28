class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        for(auto i = items.begin(); i != items.end(); i++){
            if(ruleKey == "type" && ruleValue == i->at(0))  count++;
            else if(ruleKey == "color" && ruleValue == i->at(1)) count++;
            else if(ruleKey == "name" && ruleValue == i->at(2)) count++;
        }
        return count;
    }
};