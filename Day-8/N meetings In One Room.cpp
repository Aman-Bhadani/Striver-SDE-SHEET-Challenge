struct meeting{
        
int start;
       
 int end;
        
int pos;
    
};
    
  bool static cmp(struct meeting m1,struct meeting m2){
       
     if(m1.end<m2.end) return true;
        
    else if(m1.end>m2.end) return false;
        
    else if(m1.pos<m2.pos) return true;
       
    return false;
    
  }

     int maxMeetings(int start[], int end[], int n)
    {
        
        
        struct meeting meet[n];
        
        
       for(int i=0;i<n;i++)
   {
            
       meet[i].start=start[i];
            
       meet[i].end=end[i];
           
        meet[i].pos=i+1;
        
      }
       
   sort(meet,meet+n,cmp);
       
   int cnt=1,setLimit=meet[0].end;
        
        
   for(int i=1;i<n;i++){
            
       if(meet[i].start>setLimit){
                
            cnt++;
                
             setLimit=meet[i].end;
            
            }
        
      }
       
      return cnt;
        
  
  }