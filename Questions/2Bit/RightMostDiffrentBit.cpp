
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int posOfRightMostDiffBit(int m, int n)
{
    int ans=0;
    bool b=false;
    for(int i=0;i<32;i++)
    {
        if((m&(1<<i))!=(n&(1<<i)))
        {
            ans=i;
            b=true;
            break;
        }
    }
    if(ans==0 && b==false)return -1;
    return ans+1;
}
int main()
{
    
}