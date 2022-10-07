class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        //find all nodes having indegree = 0
        vector<int> indegree(n);
        vector<int> ans;
        for(int i=0;i<edges.size();i++)
        {
            indegree[edges[i][1]]+=1;
        }
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};