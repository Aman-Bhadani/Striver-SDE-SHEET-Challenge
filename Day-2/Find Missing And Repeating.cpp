int *findTwoElement(int *arr, int n) {
 
       // code here
       
 int xor1;
        
xor1=arr[0];
        
for(int i=1;i<n;i++)
        
xor1^=arr[i];
        
        
for(int i=1;i<=n;i++)
       
 xor1^=i;
        
        
int setbit=xor1 & ~(xor1-1);
        
        
int x=0,y=0;
        
        
for(int i=0;i<n;i++)
 {
            
if(arr[i] & setbit)
    x^=arr[i];
            
else 
   y^=arr[i];
        
}
        
        
for(int i=1;i<=n;i++)
 {
            
if(i&setbit)
    x^=i;
            
else
   y^=i;
       
 }
       int count=0;
        
for(int i=0;i<n;i++)
 {
            
if(arr[i]==x) count++;
       
 }
       
 int *ans=new int[2];
       
 if(count==0)
       
 {
            
ans[0]=y;
            
ans[1]=x;
        
}
       
 else
       
 {
            
ans[0]=x;
            
ans[1]=y;
       
 }
        
return ans;
  
  }