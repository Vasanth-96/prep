// https://practice.geeksforgeeks.org/problems/count-digits-in-a-factorial3957/1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
//n! = n*(n-1)....1
//log(n!) = log(n)+...
ll noofDigits(ll n)
{
    if(n==1)return 1;
    float num=0;
    for(int i=1;i<=n;i++)
    {
        num+=log10(i);
    }
    return 1ll*ceil(num);
}
int main()
{
    cout<<noofDigits(5);
}