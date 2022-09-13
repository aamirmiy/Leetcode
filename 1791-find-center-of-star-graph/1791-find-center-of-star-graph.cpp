class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        //simplest solution would be to compare the edges to find the common node using
        //if else statements.
        
        //calculate adjacency list
        int ans;
        unordered_map<int, list<int>> adj;
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int j=0;j<adj.size();j++)
        {
            if(adj[j].size()>1)
                ans = j;
        }
        return ans;
    }
};