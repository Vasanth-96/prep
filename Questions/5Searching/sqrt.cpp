
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n'

ll sqrtnum(ll num)
{
    ll l=0;
    ll h=num;
    // [l, h]
    while(l <= h)
    {
        ll mid= l +((h-l)/2);
        if(mid*mid == num)
        {
            return mid;
        }    
        else if(mid*mid < num)
        {
            l = mid+1;
        }
        else if(mid* mid > num)
        {
            h=mid-1;
        }
    }
    return l-1;//since the low has moved a front and we want the floor of like floor(sqrt(num))
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}