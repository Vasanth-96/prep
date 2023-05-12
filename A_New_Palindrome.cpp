
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
    int t;
    cin>>t;
    while(t--)   
    {
        string str;
        cin>>str;
        map<char, int> mp;
        for(auto it:str)
        {
            mp[it]++;
        }
        string ans="NO";
        int ct=0;
        for(auto it:mp)
        {
            if(it.second >= 2)
            {
                ct++;
            }
        }
        if(ct>=2)
        {
            ans="YES";
        }
        cout<<ans<<endl;
    }
}