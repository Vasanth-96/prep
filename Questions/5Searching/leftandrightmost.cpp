
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n'

pair<long,long> indexes(vector<long long> v, long long x)
{
    // code here
    pair<long, long> ans;
    long int a=0;
    long int y=0;
    int n=v.size();
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int m=l + ((h-l)/2);
        if(v[m]>=x)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    a=h+1;
    l=0;
    h=n-1;
    while(l<=h)
    {
        int m=l + ((h-l)/2);
        if(v[m]<=x)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    y=l-1;
    bool b=false;
    if(a>-1 && y < n && v[a]==x && v[y]==x)
    {
        b=true;
    }
    if(b)
    {
        ans={a,y};
        return ans;
    }
    return {-1, -1};
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}