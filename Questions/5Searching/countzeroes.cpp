
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n'

int countZeroes(int arr[], int n) 
    {
        int l=0;
        int h=n-1;
        // [l, h]
        while(l <= h)
        {
            int mid= l +((h-l)/2);
            if(arr[mid] == 1)
            {
                l = mid+1;
            } 
            else if(arr[mid] == 0)
            {
                h = mid -1;
            }
        }
        return n-l;
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}