
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void countingsort(int arr[], int n, int p)
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(mx, arr[i]%p);
    }
    mx=mx+1;
    int a[mx];
    for(int i=0;i<mx;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        a[arr[i]%p]++;
    }
    for(int i=1;i<mx;i++)
    {
        a[i]+=a[i-1];
    }
    int ans[n];
    for(int i=0;i<n;i++)
    {
        int temp=a[arr[i]%p]-1;
        ans[temp]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=ans[i];
    }
}
void radixsort(int arr[], int n)
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(arr[i], mx);
    }
    int digits=0;
    while(mx>0)
    {
        mx=mx/10;
        digits++;
    }
    for(int j=1;j<=digits;j++)
    {
        int p=pow(10, j);
        countingsort(arr, n, p);
    }
}
int main()
{
    int n=5;
    int arr[n]={333, 187, 434, 721, 529};
    radixsort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }  
}