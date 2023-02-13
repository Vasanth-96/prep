
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> divisors(int n)
{
    vector<int> ans;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
            {
                ans.push_back(n/i);
            }
            ans.push_back(i);
        }
    }
    return ans;
}
int sumofdivsiors(int n)
{
    // n = p1^e1 p2^e2 p3^e3 ...
    // sum = p1^e1+1 - 1 / p1 - 1 .....using summation formula for gp.
    vector<int> divi = divisors(n);
    // all are unique in divi
    ll ans=0;
    for(auto it:divi)
    {
        ans+=it;
    }
    return ans;
}
int main()
{
    cout<<sumofdivsiors(35);
}