// if gcd(x, n) is 1 then it is coprime.
// if p is prime then gcd(n, p) is 1 then as p>n then phi(n) = p-1; like phi(5)=4;
// if a and b is relatively prime then phi(a)phi(b) = phi(ab) 
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int phi(int n)
{
    vector<int> phi(n+1);
    for(int i=0;i<=n;i++)
    {
        phi[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<=n;j+=i)
            {
                phi[j]-=phi[j]/i;
            }
        }
    }
    return phi[n];
}
int usingfact_phi(int n)
{
    int ans=n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
                ans-=ans/i;
            }
        }
    }
    if(n>1)
    {
        ans-=ans/n;
    }
    return ans;
}
int main()
{
    cout<<phi(21);
    cout<<usingfact_phi(21);
}