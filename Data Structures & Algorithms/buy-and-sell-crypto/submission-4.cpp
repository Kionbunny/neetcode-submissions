class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minBuy = prices[0];

        for(int num : prices) {
            maxP = max(maxP, num - minBuy); //currPrice - lowest price seen so far 
            minBuy = min(minBuy, num);// min price seen so far;
        }
        return maxP;

        
    }
};
