
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int seive(int n)
    {
        bool isPrime[n+1];
        memset(isPrime, true, sizeof(isPrime));
        isPrime[0]=false;
        isPrime[1]=false;
        int ans=0;
        for(int i=2;i*i<=n;i++)
        {
            if(isPrime[i])
            {
                if(i<=sqrt(n))
                {
                    ans++;
                }
                for(int j=i*i;j<=n;j+=i)
                {
                    isPrime[j]=false;
                }
            }
        }
        return ans;
    }
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int> ans;
        for(int i=0;i<q;i++)
        {
            int num=query[i];
            ans.push_back(seive(num));
        }
        return ans;
    }
int main()
{
    
}