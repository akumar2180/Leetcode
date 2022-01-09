class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        //    1st method
       /* partial_sum(nums.begin(),nums.end(),nums.begin());
        return nums;
        */
        
      //2nd Method  
        
        vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count +=nums[i];
            ans.push_back(count);
        }
        return ans;
        
        }
};