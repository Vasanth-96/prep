
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void merge(int arr[], int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int lef[n1], rig[n2];
    for(int i=0;i<n1;i++)
    {
        lef[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        rig[i]=arr[m+i+1];
    }
    int q=0, w=0, i=l;
    while(q<n1 && w<n2)
    {
        if(lef[q]<rig[w])
        {
            arr[i]=lef[q];
            q++;
        }
        else
        {
            arr[i]=rig[w];
            w++;
        }
        i++;
    }
    while(q<n1)
    {
        arr[i]=lef[q];
        i++;
        q++;
    }
    while(w<n2)
    {
        arr[i]=rig[w];
        i++;
        w++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    int n=5;
    int arr[n]={3, 1, 4, 7, 5};
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }   
}