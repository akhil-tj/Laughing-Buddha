class Solution {
public:
    int xorOperation(int n, int start) {
     vector<int> nums(n);
        int temp=0;
        for(int i=0; i<n; i++) {
             nums[i]=start + 2*i;
            temp^=nums[i];
        }
        return temp;
    }
};