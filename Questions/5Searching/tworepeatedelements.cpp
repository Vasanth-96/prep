
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n'

vector<int> twoRepeated (int arr[], int N) 
{
    // Your code here
    int l=0;
    int h=N-1;
    while(l<=h)
    {
        int m=l+((h-l)/2);
        if(arr[m]<=m+1)
        {
            h=m-1;
        }
        else
        {
            l=m+1;
            
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}