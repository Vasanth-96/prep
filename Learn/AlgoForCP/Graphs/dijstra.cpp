#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<pair<ll, ll>> g[n+1];
    vector<ll> par(n+1, -1);
    while(m--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        g[x].pb({y,w});
        g[y].pb({x,w});
    }   
    vector<ll> dist(n+1, 1e12);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> s;
    ll source=1;
    s.push({0, source});
    dist[source]=0;
    while(s.size()>0)
    {
        auto it = s.top();
        ll v = it.second;
        s.pop();
        for(auto child: g[v])
        {
            ll cv = child.first;
            ll d = child.second;
            if (dist[v] + d < dist[cv])
            {
                dist[cv] = dist[v] + d;
                s.push({dist[cv], cv});
                par[cv] = v;
            }
        }
    }
    vector<ll> ans;
    ll current = n;
    
    while (current != -1) {
        ans.push_back(current);
        current = par[current];
    }
    reverse(ans.begin(), ans.end());
    if(dist[n]!=1e12)
    {
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
    }
    else
    {
        cout<<-1;
    }
}