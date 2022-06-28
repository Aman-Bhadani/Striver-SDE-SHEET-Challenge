class Solution
{
   
 public:
    //Function to reverse a linked list.
    
struct Node* reverseList(struct Node *head)
    
{
            
     Node* dummy=NULL;
        
        
       while(head!=NULL)
      
     {
            
     Node* next=head->next;
            
     head->next=dummy;
            
    dummy=head;
            
     head=next;
        
   }
       
     return dummy;
    
  }
    

};
    