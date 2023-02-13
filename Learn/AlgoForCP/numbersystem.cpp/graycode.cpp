
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

int g (int n) {
    return n ^ (n >> 1);
}
int rev_g(int g) {
    int n = 0;
    while (g) {
        n ^= g;
        g >>= 1;
    }
    return n;
}
int main()
{
    
}