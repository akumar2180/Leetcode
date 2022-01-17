class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> ans;
        
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
            ans.push_back({nums[i],i});
            
        sort(ans.begin(),ans.end());
        int s=0;
        int e=n-1;
        while(s<e)
        {
        int sum=ans[s].first+ans[e].first;
        if(sum==target)
            return {ans[s].second,ans[e].second};
            else if(sum>target)
                e--;
            else
                s++;
        }
        
        return {-1,-1};
        
    }
};

