
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int binarysearch(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    
    while(low <= high)
    {
        int mid=(low+high)/2;
        if(x==arr[mid])return mid;
        else if(x<arr[mid])high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main()
{
    int n=7;
    int arr[7]={2, 3, 5, 8, 9, 11, 45};
    int x=4;
    cout<<binarysearch(arr, n, x);   
}