// https://practice.geeksforgeeks.org/problems/factorial5739/1
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//recursion
ll fact(ll n)
{
    if(n==0 || n==1)return 1;
    else return n*fact(n-1);
}
//dp
ll fact(ll n)
{
    ll f[n+1];
    f[0]=f[1]=1;
    for(int i=1;i<=n;i++)
    {
        f[i]=i*f[i-1];
    }
    return f[n];
}
int main()
{
    cout<<fact(5);
}