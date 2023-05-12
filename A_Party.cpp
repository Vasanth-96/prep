
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n' // comment in case of interactive and (dont forget) use immediately after any cout 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans=0;
    int k=n;
    map<int, int> mp;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x!=-1)
        {
            mp[x]++;
        }
    }   
    cout<<mp.size()+1;
    
}