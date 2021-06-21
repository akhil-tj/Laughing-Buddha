class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> finalVector;     
        for(int i=0; i<nums.size(); i=i+2) {
            finalVector.insert(finalVector.end(), nums[i], nums[i+1]);
        }
        return finalVector;
    }
};

