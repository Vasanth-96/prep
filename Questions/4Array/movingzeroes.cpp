
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
int main()
{
    
}