
#include<bits/stdc++.h>
using namespace std;
#define ll long long

unsigned int getFirstSetBit(int n)
{
    if(n==0)return 0;
    int ans=0;
    for(int i=0;i<32;i++)
    {
        if(n&(1<<i))
        {
            ans=i;
            break;
        }
    }
    return ans+1;
}
int main()
{
    
}