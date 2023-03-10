int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        int s1=0;
        int s2=sum;
        for(int i=0;i<n;i++)
        {
            if(s1+arr[i]==s2)
            {
                return i+1;
            }
            s1+=arr[i];
            s2-=arr[i];
        }
        return -1;
    }