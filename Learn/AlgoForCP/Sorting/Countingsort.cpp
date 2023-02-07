
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void countingsort(int arr[], int n)
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(mx, arr[i]);
    }
    mx=mx+1;
    int a[mx];
    for(int i=0;i<mx;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        a[arr[i]]++;
    }
    for(int i=1;i<mx;i++)
    {
        a[i]+=a[i-1];
    }
    int ans[n];
    for(int i=0;i<n;i++)
    {
        int ind=arr[i];
        int temp=a[arr[i]]-1;
        ans[temp]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int n=5;
    int arr[n]={5, 2, 7, 6, 3};
    countingsort(arr, n);
}