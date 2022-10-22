class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n));
        int ans = INT_MAX;
        for(int j=0;j<n;j++)
        {
            dp[0][j] = grid[0][j];//initializing the dp matrix with first row values
        }
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int ans = INT_MAX;
                for(int k=0;k<n;k++)
                {
                    
                
                if(j==k)
                {
                    continue;
                }
                else
                    ans = min(ans, dp[i-1][k]+grid[i][j]);                            
            }
              dp[i][j]=ans;  
            }
        }
        for(int j=0;j<n;j++)
        {
            ans=min(ans,dp[m-1][j]);
        }
         return ans;
        }
};