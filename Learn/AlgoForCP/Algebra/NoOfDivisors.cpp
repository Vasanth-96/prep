
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
int main()
{
    
}