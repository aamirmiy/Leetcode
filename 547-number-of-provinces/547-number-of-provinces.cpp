class Solution {
public:
    void dfs(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj)
    {
        vis[node]=true;
        for(auto x:adj[node])
        {
            if(!vis[x])
            {
                dfs(x, vis, adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int, bool> vis;
        int count = 0;
        unordered_map<int, list<int>> adj;
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0; j<isConnected.size();j++)
            {
                if(i!=j && isConnected[i][j]==1)
                {
                    int u = i;
                    int v = j;
                    adj[u].push_back(v);
                    adj[v].push_back(u);
                }
            }
        }
        for(int i = 0;i<isConnected.size();i++)
        {
            if(!vis[i])
            {
                dfs(i, vis, adj);
                count++;
            }
        }
        return count;
    }
};