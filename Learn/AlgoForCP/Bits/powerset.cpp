
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> powerset(vector<int> arr)
{
    vector<vector<int>> ans;
    int n=arr.size();
    for(int i=0;i<(1<<n);i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                temp.push_back(arr[j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ps = powerset(arr);
}