class Solution {
public:
    void dfs(int node, vector<vector<int>>& rooms, unordered_map<int, bool> &vis, bool &ans, vector<int> &nodes, int &count)
    {
        
        vis[node]=true;
        count++;
        nodes.push_back(node);
        if(nodes.size()==rooms.size())
        {
            ans= true;
        }
        // else if(nodes.size()!= rooms.size() && count == rooms.size())
        // {
        //     ans = false;
        // }
        else
        {
        for(auto x: rooms[node])
        {
            if(!vis[x])    
                dfs(x, rooms, vis, ans, nodes, count);
            else
                continue;
        }
        }
        if(count!=rooms.size())
            ans=false;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        bool ans;
        int count=0;
        vector<int> nodes;
        unordered_map<int, bool> vis;
        dfs(0, rooms, vis, ans, nodes, count);
        return ans;
    }
};