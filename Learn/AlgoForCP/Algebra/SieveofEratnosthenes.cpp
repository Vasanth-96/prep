
#include<bits/stdc++.h>
using namespace std;
#define ll long long
//nlog(logn)
bool isPr(int n)
{
    bool isPrime[n+1];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isPrime[i]=false;
            }
        }
    }
    return isPrime[n];
}
int main()
{
    cout<<isPr(11);
}