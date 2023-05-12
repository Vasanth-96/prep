
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int v, vector<int> g[], vector<bool> &vis)
    {
        vis[v]=true;
        for(auto ch:g[v])
        {
            if(!vis[ch])
            {
                dfs(ch, g, vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> g[n];
        for(auto it:connections)
        {
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);
        }
        int ct = 0;
        vector<bool> vis(n, false);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ct++;
                dfs(i, g, vis);
            }
        }
        if(connections.size() >= n-1)
        {
            return ct-1;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    
}