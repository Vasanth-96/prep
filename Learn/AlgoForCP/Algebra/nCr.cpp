
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;
// 1st using (N)
ll ncr(int n, int r)
{
    int fact[n+1];
    fact[0]=1;
    for(int i=1;i<=n;i++)
    {
        fact[i]=fact[i-1]*i;
    }
    return fact[n]/(fact[n-r]*fact[r]);

}

int main()
{
    cout<<ncr(5, 2);
    // cout<<nCr(5, 2, MOD);
}
