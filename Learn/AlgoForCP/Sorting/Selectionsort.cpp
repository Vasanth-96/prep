
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// O(N*N) time complexity
int select(int arr[], int i, int n)
{
    int ind=i;
    int mn=arr[i];
    for(int j=i+1;j<n;j++)
    {
        if(mn>arr[j])
        {
            mn=arr[j];
            ind=j;
        }
    }
    return ind;
}
void selectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        swap(arr[select(arr, i, n)], arr[i]);
    }
}
int main()
{
    int n=5;
    int arr[n]={4, 1, 3, 9, 7};
    selectionSort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}