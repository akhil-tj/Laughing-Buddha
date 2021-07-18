class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      vector<int>::iterator it, i;  
      sort(nums.begin(), nums.end());
      it=find(nums.begin(), nums.end(), val);
      for(i=it; i!=nums.end(); i++){
          if(*i!=val) {
              break;
          }
      }
      nums.erase(it, i);
      return nums.size();
    }
};