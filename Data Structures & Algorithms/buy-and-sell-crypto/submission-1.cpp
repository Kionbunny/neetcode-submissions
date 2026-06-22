class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        // for(int i=0;i<prices.size()-1;i++){
        //     for(int j=i+1;j<prices.size();j++){
        //        int p = prices[j]-prices[i];
        //        maxP = max(maxP,p);
        //     }
        // }
        int l = 0;
        int r = 1;
        while(r < prices.size()){
            if(prices[l] < prices[r]){
                int profit = prices[r]-prices[l];
                maxP = max(maxP,profit);
            }
            else {
                l = r;// then update l with r getting minimal buy pr
            }
            r++; // r incrmenets everytime irrespecive of if () , else () conditions 
        }
        return maxP;
    }
};
