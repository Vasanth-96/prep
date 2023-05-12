
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
int n;
vector<bool> vis;
void dfs(int v)
{
    vis[v]=true;
    for(auto child:adj[v])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}


int main()
{
    
}