long long merge(long long arr[],long long temp[],int left,int mid,int right){

     int i=left,j=mid,k=left;
       
      long long count=0;
        
        
      while((i<=mid-1) && (j<=right))
        
      {
           
            if(arr[i]<=arr[j])
           
           temp[k++]=arr[i++];
            
          else

         {
 
              temp[k++]=arr[j++];
 
              count+=(mid-i);
 
          }
        
     }
        
        
       while(i<=mid-1)
        
            temp[k++]=arr[i++];
        
        
      while(j<=right)
        
          temp[k++]=arr[j++];
        
        
     for(int i=left;i<=right;i++)
        
         arr[i]=temp[i];
        
       
        return count;
        
    
}
    
    

long long merge_sort(long long arr[],long long temp[],int left,int right){

        long long count=0;

        if(left<right){

            int mid=(left+right)/2;

       count+=merge_sort(arr,temp,left,mid);
            
        count+=merge_sort(arr,temp,mid+1,right);
            
           
        count+=merge(arr,temp,left,mid+1,right);
       
    }

        return count;
   
 }
    
  
  
    
long long int inversionCount(long long arr[], long long N)
    {

        long long temp[N];

        long long ans=merge_sort(arr,temp,0,N-1);

        return ans;
    
}
