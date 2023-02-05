
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll x, ll y)
{
    while(y)
    {
        x = x%y;
        swap(x, y);
    }
    return x;
}

int main()
{
    cout<<gcd(45, 78);
}