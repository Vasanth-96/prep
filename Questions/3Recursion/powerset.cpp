
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void powerset(int i, int n, vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans)
{
    if(i==n)
    {
        if(temp.size()!=0)
        {
            ans.push_back(temp);
        }
    }
    else
    {
        temp.push_back(arr[i]);
        powerset(i+1, n, arr, temp, ans);
        temp.pop_back();
        powerset(i+1, n, arr, temp, ans);
    }
}
int main()
{
    vector<int> arr={1, 2, 3};
    int n=arr.size();
    vector<vector<int>> ans;
    vector<int> temp;
    powerset(0, n, arr, temp, ans);
    for(auto it:ans)
    {
        for(auto x:it)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }   
}