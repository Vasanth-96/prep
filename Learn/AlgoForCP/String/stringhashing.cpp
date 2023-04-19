
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n' // comment in case of interactive and (dont forget) use immediately after any cout 
const int P = 31;
ll hashofs(string s)
{
    ll ans=0;
    int n=s.size();
    long long po=1;
    for(int i=0;i<n;i++)
    {
        ans+=((s[i]-'a' + 1)*po) % M;
        po = (P*po)%M;

    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}