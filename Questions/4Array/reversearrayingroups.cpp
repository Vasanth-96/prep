void reverseInGroups(vector<long long>& arr, int n, int k){
        int i=0;
        for(i=0;i<n;i=i+k)
        {
            if(i+k >= n)
            {
                break;
            }
            reverse(arr.begin()+i, arr.begin()+i+k);
        }
        reverse(arr.begin()+i, arr.end());
    }