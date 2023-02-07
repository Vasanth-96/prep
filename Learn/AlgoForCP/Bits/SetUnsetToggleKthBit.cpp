
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int setkbit(int n, int k)
{
    return n|(1<<k);
}
int unsetkbit(int n, int k)
{
    return n&~(1<<k);
}
int toggle(int n, int k)
{
    return n^(1<<k);
}

int main()
{
    
}