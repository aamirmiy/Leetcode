class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //n is the nodes
        //trust is the edges
        //maybe this is a directed graph problem
        //first step to create adjacency list
        unordered_map<int,list<int>> adj;
        for(int i=0;i<trust.size();i++)
        {
            int u = trust[i][0]-1;
            int v = trust[i][1]-1;
            adj[u].push_back(v);
        }
        vector<int> indegree(n);
        vector<int> outdegree(n);
        for(auto i:adj)
        {
            for(auto j: i.second)
            {
            indegree[j]++;
            }
            outdegree[i.first]++;
        }
        for(int k=0;k<n;k++)
        {
            
            if(indegree[k]== n-1 && outdegree[k]==0)
                return k+1;
        }
        return -1;
    }
};