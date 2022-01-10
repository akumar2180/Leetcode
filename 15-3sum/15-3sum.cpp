class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int target=-nums[i];
           
            int sp=i+1;
            int ep=n-1;
            
            while(sp<ep){
                int sum=nums[sp]+nums[ep];
                
                if(sum <target){
                    sp++;
                }
                else if(sum>target){
                    ep--;
                }
                else{
                    vector<int> triplet = {nums[i], nums[sp], nums[ep]};
                    ans.push_back(triplet);
                
                while (sp < ep && nums[sp] == triplet[1]) sp++;
                    
                while (sp < ep && nums[ep] == triplet[2]) ep--;
                
            }
            }
            
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
            i++;
        }
        return ans;
        
        
    }
};