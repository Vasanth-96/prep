
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
int n;

void bfs(int v)
{
    queue<int> q;
    q.push(v);
    while(!q.empty())
    {
        int x = q.front();
        vis[x] = true;
        q.pop();
        for(int child:adj[x])
        {
            if(!vis[child])
            {
                q.push(child);
            }
        }
    }
}



int main()
{
    
}