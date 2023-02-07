
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int partition(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i=-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void qusort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi=partition(arr, low, high);
        qusort(arr, low, pi-1);
        qusort(arr, pi+1, high);
    }
}

int main()
{
    int n=5;
    int arr[n]={3, 1, 4, 7, 5};
    qusort(arr, 0, n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }   
}