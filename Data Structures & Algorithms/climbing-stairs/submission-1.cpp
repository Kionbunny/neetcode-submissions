class Solution {
public:
   
   int helper(vector<int>&dp, int n) {

     if(n == 0) {return 1;}

      if(n < 1) {return 0;}

      if(dp[n] != -1) {
        return dp[n];
      }

      dp[n] = helper(dp,n-2) + helper(dp,n-1);
      return dp[n];

    
   }





   int climbStairs(int n) {

        vector<int>dp(n+1,-1);
        return helper(dp,n);

    }
};
