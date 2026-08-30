class Solution {
public:
    void dfs(int i,vector<vector<int>>& adjlist, vector<bool>& vis)
    {
        if(vis[i]==true)
        return;
        vis[i]=true;
        for(int j=0;j<adjlist[i].size();j++)
        {
            if(vis[adjlist[i][j]]!=true)
            dfs(adjlist[i][j],adjlist,vis);
        }
        return;
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        int count=0;
        vector<bool> vis(n, false);
        vector<vector<int>> adjlist(n);
        for(int i=0;i<edges.size();i++)
        {
            adjlist[edges[i][0]].push_back(edges[i][1]);
            adjlist[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=0;i<adjlist.size();i++)
        {
                if(vis[i]==false)
                {
                    dfs(i, adjlist, vis);
                    count++;
                }
        }
        return count;
    }
};
