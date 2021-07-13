class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>::iterator ip;
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        ip = unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), ip));
        if(nums.size()>2) {
            return nums[2];
        } else {
            return nums.at(0);
        }
    }
};