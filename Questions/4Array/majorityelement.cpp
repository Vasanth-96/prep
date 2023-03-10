
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

int majorityElement(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(), nums.end());
    return nums[n/2];
}
int main()
{
    
}