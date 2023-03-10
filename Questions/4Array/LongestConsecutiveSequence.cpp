
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        set<int> s;
        for(int x:nums)
        {
            s.insert(x);
        }
        int first=*s.begin();
        if(n==0)return 0;
        int ans=1;
        int temp=1;
        bool t=true;
        for(auto it:s)
        {
            if(t)
            {
                t=false;
                continue;
            }
            else
            {
                if(it==first+1)
                {
                    temp++;
                    ans=max(temp, ans);
                }
                else
                {
                    temp=1;
                }
                first=it;
            }
        }
        return ans;
    }
int main()
{
    
}