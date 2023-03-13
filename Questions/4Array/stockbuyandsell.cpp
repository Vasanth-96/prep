vector<vector<int> > stockBuySell(vector<int> a, int n){
        // code here
        vector<vector<int>> ans;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                ans.push_back({i, i+1});
            }
        }
        return ans;
    }