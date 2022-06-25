class Solution
{
   
 public:
   
   int maxLen(vector<int>&A, int n)

      {   
        // Your code here
       
    int sum=0;
        
    int maxLen=0;
        
   map<int,int>mp;
        
   for(int i=0;i<n;i++)
        
    {
           
          sum+=A[i];
            
          if(sum==0) 
          maxLen=max(maxLen,i+1);
           
          else if(mp.find(sum)==mp.end()) 
          mp[sum]=i;
           
          else if(mp.find(sum)!=mp.end())
            
          maxLen=max(maxLen,i-mp[sum]);
        
     }
        
   return maxLen;
    
   }

};