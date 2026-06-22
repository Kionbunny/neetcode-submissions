class Solution {
public:

  int helper(int i,int amount,vector<int>&coins) {

// base case 
if(i == 0) {
    return (amount % coins[0]) ? 1e9 : amount/coins[0];
}
  int np = 0 + helper(i-1,amount,coins);
  int p = (amount >= coins[i]) ? 1 + helper(i,amount - coins[i],coins)  : 1e9;
  return min(np,p);
  }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int ans = helper(n-1,amount,coins);
        return (ans == 1e9) ? -1 : ans; 
    }
};
