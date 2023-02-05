
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int isPrime(int n)
{
    bool b=true;
    if(n==1)return 0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0 && i!=n && i!=1)
        {
            b=false;
            break;
        }
    }
    if(b)return 1;
    else return 0;
}

int main()
{
    
}