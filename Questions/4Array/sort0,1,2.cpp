#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

void sortColors(vector<int>& nums) {
        int n=nums.size();
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                swap(nums[i], nums[zero]);
                if(one==zero)
                {
                    zero++;
                    one++;
                }
                else
                {
                    zero++;
                }
            }
            if(nums[i]==1)
            {
                swap(nums[i], nums[one]);
                one++;
            }
        }
    }
int main()
{
    
}