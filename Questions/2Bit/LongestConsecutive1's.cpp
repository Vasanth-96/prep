
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int maxConsecutiveOnes(int N)
{
    int ans=0;
    int temp=0;
    for(int i=0;i<ceil(log2(N));i++)
    {
        if(N&(1<<i))
        {
            temp++;
            ans=max(ans, temp);
        }
        else 
        {
            temp=0;
        }
    }
    return ans;
}
int main()
{
    
}