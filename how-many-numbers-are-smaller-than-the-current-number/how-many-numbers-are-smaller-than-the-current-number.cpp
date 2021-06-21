class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        for(int i=0; i<nums.size(); i++) {
            int temp=0;
            for(int j=0; j<nums.size(); j++) {
                if(i == j) {
                    continue;
                }
                else if(nums[j]<nums[i]) {
                    temp++;
                }
            } 
            v.emplace_back(temp);
        }
        return v;
    }
};