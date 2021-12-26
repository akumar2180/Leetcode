class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        int maxSum = INT_MIN;
  int currSum = 0;

  for (int i = 0; i <= n - 1; i++) {
    currSum += nums[i];

    if (currSum > maxSum) {
      maxSum = currSum;
    }

    if (currSum < 0) {
      currSum = 0;
    }
  }

  return maxSum;

}
        
    
};