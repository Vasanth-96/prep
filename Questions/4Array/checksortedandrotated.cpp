bool check(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<=nums[i+1])
            {
                ans++;
            }
        }
        if(ans==n-1)
        {
            return true;
        }
        else if(nums[0]>=nums[n-1])
        {
            ans++;
            if(ans==n-1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }