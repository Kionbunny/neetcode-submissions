class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
               int p = prices[j]-prices[i];
               maxP = max(maxP,p);
            }
        }
        return maxP;
    }
};
