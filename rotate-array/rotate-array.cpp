class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());
        
 
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i]; //this will shift all the i element to k position
        }
        nums=temp;  //copy temp into nums vector
    }
};  