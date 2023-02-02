
// log(y)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bxp(ll x, ll y)
{
    ll ans=1;
    while(y > 0)
    {
        if(y & 1)
        {
            ans = ans * x;
        }
        y = y/2;
        x = x*x;
    }
    return ans;
}
