class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0,minVal=prices[0];
        for(int i=1;i<n;i++){
            
            int profit=prices[i]-minVal;
            maxProfit=max(maxProfit,profit);
            minVal=min(minVal,prices[i]);
        }
        return maxProfit;
    }
};