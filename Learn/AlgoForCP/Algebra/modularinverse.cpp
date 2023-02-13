
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
    // given a and m
    // to find ax = 1 mod m
    // a inverse
    // that exist only if gcd(a and m) = 1;
    // lets use extended gcd algorithm as ax+by=1 here ax + my=1
    int a = 3;
    int m = 11;
    int x, y;
    int g = extendedgcd(a, m, x, y);
    if (g != 1) {
        cout << "No solution!";
    }
    else {
        x = (x % m + m) % m;
        cout << x << endl;
    }
}   