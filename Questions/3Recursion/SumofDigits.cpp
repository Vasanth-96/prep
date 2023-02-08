
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int sumOfDigits(int N)
{
    if(N==0)return 0;
    return N%10 + sumOfDigits(N/10);
}
int main()
{
    
}