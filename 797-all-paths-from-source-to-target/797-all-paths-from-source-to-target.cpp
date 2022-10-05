class Solution {
public:
    void dfs(int index, vector<int> &path, vector<vector<int>> &ans,vector<vector<int>>& graph)
    {
        path.push_back(index);
        if(index==graph.size()-1)
        {
            ans.push_back(path);
        }
        for(auto x: graph[index])
        {
            dfs(x,path,ans,graph);
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(0, path, ans, graph);
        return ans;
    }
};