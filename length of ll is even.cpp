class Solution {
  public:
    bool isEven(Node* head) 
    {
       int len=1;
       if(head==NULL)
       {
           return NULL;
       }
       Node* temp=head;
       while(temp->next!=NULL)
       {
           len++;
           temp=temp->next;
           
       }
       return (len%2==0);
    }
};