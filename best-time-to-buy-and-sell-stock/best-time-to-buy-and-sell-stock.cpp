class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int sell=0;
        int buy=prices[0];
        for(int i=1;i<n;i++)
        {
            sell=max(sell,prices[i]-buy);
            buy=min(buy,prices[i]);
        }
        return sell;
       
            
        
        
        
    }
};