class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) 
    {
      Node* newnode=new Node(x);
      
      if(head==NULL)
      {
          return newnode;
      }
      Node* left=head;
      Node* right=head;
      while(right->next!=NULL && right->next->next!=NULL)
      {
         left=left->next;
         right=right->next->next;
      }
      newnode->next=left->next;
      left->next=newnode;
      
      
      return head;
        
    }
};