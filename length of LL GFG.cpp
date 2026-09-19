class Solution {
  public:
    int getCount(Node* head) 
    {
       int len=1;
       if(head==NULL)
       {
           return NULL;
       }
       Node* temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
           len++;
       }
       return len; 
    }
};