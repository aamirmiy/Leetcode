class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        if(dp[n]!=-1)
            return dp[n];
        for(int i=2;i<=n;i++)
        {
         dp[i] = dp[i-1]+dp[i-2];   
        }
        return dp[n];
    }
};