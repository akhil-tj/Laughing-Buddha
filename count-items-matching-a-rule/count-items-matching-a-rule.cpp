class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        int val;
        if(ruleKey.compare("type") == 0) {
            val = 0;
        }
        else if(ruleKey.compare("color") == 0) {
            val = 1;
        }
        else if(ruleKey.compare("name") == 0) {
            val = 2;
        }
        
        for(int i=0; i<items.size(); i++) {
            if(ruleValue.compare(items[i][val]) == 0) {
                count++;
            }
        }
        return count;
    }
};