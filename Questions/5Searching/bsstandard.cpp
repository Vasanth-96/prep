
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n'

//best one ever
int search(vector<int> arr, int element)
{
    int n=arr.size();
    int l=0;
    int h=n-1;
    // [l, h]
    while(l <= h)
    {
        int mid= l +((h-l)/2);
        if(arr[mid] == element)
        {
            return mid;
        } 
        else if(arr[mid] < element)
        {
            h = mid-1;
        }
        else if(arr[mid] > element)
        {
            l = mid +1;
        }
    }
    //post conditions
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
}