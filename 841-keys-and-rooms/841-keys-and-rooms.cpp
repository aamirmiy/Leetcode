class Solution {
public:
    void dfs(int node, vector<vector<int>>& rooms, unordered_map<int, bool> &vis, bool &ans, int &count)
    {
        
        vis[node]=true;
        count++;
        if(count==rooms.size())
        {
            ans= true;
        }
        else
        {
        for(auto x: rooms[node])
        {
            if(!vis[x])    
                dfs(x, rooms, vis, ans, count);
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
        unordered_map<int, bool> vis;
        dfs(0, rooms, vis, ans, count);
        return ans;
    }
};