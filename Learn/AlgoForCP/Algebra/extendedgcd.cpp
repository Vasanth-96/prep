
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int extendedgcd(int a, int b, int &x, int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1, y1;
    int d=extendedgcd(b, a%b, x1, y1);
    x=y1;
    y=x1-y1 *(a/b);
    return d;
}
int main()
{
    int x=0;
    int y=0;
    cout<<extendedgcd(3, 11, x, y)<<" "<<x<<" "<<y;
}