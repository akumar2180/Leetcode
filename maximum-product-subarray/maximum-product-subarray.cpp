class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
      int maxi= nums[0];
        int mini= nums[0];
        int ans= maxi;
        
        for(int i=1; i<nums.size(); i++) {
            int curr= nums[i];
            
            int temp_max= max(curr, max(maxi*curr, mini*curr));
     
            mini= min(curr, min(maxi*curr, mini*curr));
            maxi= temp_max;
            
            ans= max(maxi, ans);
        }
        
        return ans;
  
    }
};
   