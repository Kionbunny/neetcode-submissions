class Solution {
public:

  int helper(int i,int amount,vector<int>&coins,vector<vector<int>>&dp) {

// base case 
if(i == 0) {
    return (amount % coins[0]) ? 1e9 : amount/coins[0];
}
if(dp[i][amount] != -1) {return dp[i][amount];}

  int np = 0 + helper(i-1,amount,coins,dp);
  int p = (amount >= coins[i]) ? 1 + helper(i,amount - coins[i],coins,dp)  : 1e9;
  return min(np,p);
  }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans = helper(n-1,amount,coins,dp);
        return (ans == 1e9) ? -1 : ans; 
    }
};
