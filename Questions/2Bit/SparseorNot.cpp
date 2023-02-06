
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isSparse(int n)
{
    for(int i=0;i<(ceil(log2(n)));i++)
    {
        if((n & (1 << i)) && (n & (1 << (i + 1))))
        return false;
    }
    return true;
}
int main()
{
    
}