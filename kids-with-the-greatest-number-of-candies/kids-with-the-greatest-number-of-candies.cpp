class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        vector<bool> vb;
        for(int i=0; i<candies.size(); i++) {
            if(candies[i]+extraCandies >= max) {
                vb.emplace_back(true);
            } else {
                vb.emplace_back(false);
            }
        }
        return vb;
    }
};