
#include<bits/stdc++.h>
using namespace std;
#define ll long long

unsigned int swapBits(unsigned int n)
{
    for(int i=0;i<31;i=i+2)
    {
        int x=0, y=0;
        if(n&(1<<i))
        {
            x=1;
        }
        if(n&(1<<(i+1)))
        {
            y=1;
        }
        if(y==1)
        {
            n=n|(1<<i);
        }
        else
        {
            n= n& ~(1<<i);
        }
        if(x==1)
        {
            n=n|(1<<(i+1));
        }
        else
        {
            n= n& ~(1<<(i+1));
        }
    }
    return n;
}
int main()
{
    
}