class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        for(int i=0; i < prices.size(); i++){
            int buy = prices[i];
            for(int j=i+1; j < prices.size(); j++) {
                maxP = max(maxP, prices[j]-buy);
            }
        }
        return maxP;
        
    }
};
