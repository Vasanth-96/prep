
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

}

int main()
{
    int n=5;
    int arr[n]={3, 5, 4, 6, 1};
    insertionsort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}