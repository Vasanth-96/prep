
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

string binToGrey(string B) 
{
    string str=B;
    str[0]='0';
    for(int i=1;i<str.size();i++)
    {
        str[i]=(str[i]==B[i-1] ? '0' : '1');
    }
    return str;
}
string greyToBin(string G) {
        
    }
int main()
{
    cout<<binToGrey("0011")<<endl;
}