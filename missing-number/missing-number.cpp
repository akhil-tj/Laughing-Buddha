class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i, n=nums.size();
        sort(nums.begin(), nums.end());       
        
           for( i=0; i<n; i++) {
               if(nums[i]!=i) {
                   return i;
               }         
        }        
        return i;
    }
};