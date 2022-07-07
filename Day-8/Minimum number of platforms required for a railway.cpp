public:
    
      int findPlatform(int arr[], int dep[], int n)
    {
    	
 	
           int platformNeeded=1,ans=1;
    	
           sort(arr,arr+n);
    	
           sort(dep,dep+n);
    	
           int i=0,j=1;
    	
             while(i<n && j<n){
    	   
                 if(arr[j]>dep[i]){
                 
                    platformNeeded--;
                 
                            i++;
    	    
                   }
    	  
             else if(arr[j]<=dep[i]){
    	        
                   platformNeeded++;
    	       
                         j++;
    	    
                   }
    	  
           if(platformNeeded>ans) 
               ans=platformNeeded;
    	
          }
    	
  return ans;
    	
  
  }