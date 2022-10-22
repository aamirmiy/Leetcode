class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        //solving using bottom up approach
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m,vector<int> (n, -1));
        int ans = INT_MAX;
        //initialize dp with base values
        
        for(int j=0;j<n;j++)
        {
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0)
                    dp[i][j] = matrix[i][j] + min(dp[i-1][j],dp[i-1][j+1]);
                else if(j==n-1)
                    dp[i][j] = matrix[i][j] + min(dp[i-1][j-1],dp[i-1][j]);
                else
                    dp[i][j] = matrix[i][j] + min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]));
            }
        }
        for(int j=0;j<n;j++)
        {
            ans= min(ans,dp[m-1][j]);
        }
        return ans;
    }
};