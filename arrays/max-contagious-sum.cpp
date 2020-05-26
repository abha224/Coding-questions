int Solution::maxSubArray(const vector<int> &a) {
    
    int n=a.size();
    int maxi=a[0];
    int cur=a[0];
    
    for(int i=1;i<n;i++)
    {
        cur=max(a[i], cur+a[i]);
        maxi=max(cur, maxi);
    }
    
    return maxi;
    
}

