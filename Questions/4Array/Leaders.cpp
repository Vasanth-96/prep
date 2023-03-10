vector<int> leaders(int a[], int n){
        // Code here
        int mx=a[n-1];
        vector<int> ans;
        ans.push_back(mx);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=mx)
            {
                ans.push_back(a[i]);
            }
            mx=max(a[i], mx);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }