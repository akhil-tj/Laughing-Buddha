class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        // for(auto it: nums) {
        //     cout<<it<<" ";
        // }
        
        return (nums.at(0)*nums.at(1)) - (nums.at(n-1)*nums.at(n-2));
    }
};