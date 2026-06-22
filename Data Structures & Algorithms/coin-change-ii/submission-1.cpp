class Solution {
public:
   int helper(int i,int amount,vector<int>&v,vector<vector<int>>&dp) {

    if(amount == 0) {return 1;}// we got one distinct way 
    if(i < 0) {return 0;}// no way exist to reach the target 
    if(dp[i][amount] != -1) {
        return dp[i][amount];
    }
     int np = helper(i-1,amount,v,dp);
     int p = (amount >= v[i]) ? helper(i,amount-v[i],v,dp) : 0;
     return dp[i][amount] =  (np + p);



   }



    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
       return  helper(n-1,amount,coins,dp);
    }
};
