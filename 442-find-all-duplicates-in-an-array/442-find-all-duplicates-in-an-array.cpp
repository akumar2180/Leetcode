class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         if(nums.empty())return {};
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int no:nums)
            mp[no]++;
        for(auto it:mp)
            if(it.second==2)
            ans.push_back(it.first);
        return ans;
        

 // seond method //
        
        
        /* // unordered_map to store frequencies
    unordered_map<int, int> freq;
    for (int i=0; i<nums.size(); i++)
        freq[nums[i]]++;
 
    bool dup = false;
    unordered_map<int, int>:: iterator itr;
    for (itr=freq.begin(); itr!=freq.end(); itr++)
    {
        // if frequency is more than 1
        // print the element
        if (itr->second > 1)
        {
            return itr->first << " ";
            
        }
    }
 
    // no duplicates present
    if (dup == false)
        return -1;
}
*/
      
        
    }
};