
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n'

int findFloor(vector<long long> v, long long n, long long x)
{
        
    // Your code here
    long long l=0, h=n-1;
    while(l<=h)
    {
        long long m=l+((h-l)/2);
        if(v[m]==x)
        {
            return m;
        }
        else if(v[m]>x)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return l-1;//lowerbound means less than or equal to x. and h+1 gives me equal or greater
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}