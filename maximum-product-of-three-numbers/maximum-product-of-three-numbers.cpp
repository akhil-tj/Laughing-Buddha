class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int product1, product2, n=nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        
        for(auto it : nums) {
            cout<<it<<" ";
        }
        
        product1=nums[0]*nums[1]*nums[2];
        product2=nums[n-1]*nums[n-2]*nums[0];
        return max(product1, product2);
    }
};