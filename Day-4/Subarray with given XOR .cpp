int Solution::solve(vector<int> &A, int B) {
    
    int n=A.size();
    int count=0;
    int xr=0;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        xr^=A[i];
        if(xr==B) count++;
        
        if(mp.find(xr^B)!=mp.end()) count+=mp[xr^B];
        
        mp[xr]++;
        
    }
    return count;
}
