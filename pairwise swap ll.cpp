class Solution {
  public:
    Node* pairwiseSwap(Node* head) 
    {
       if(head==NULL || head->next==NULL)
       {
           return head;
       }
       Node* newHead = head->next; 
       Node* left=head;
       Node* right=head->next;
       while(left!=NULL && right!=NULL)
       {
           Node* temp=right->next;
           right->next=left;
           if(temp==NULL )
           {
               left->next=NULL;
               break;
           }
           if( temp->next==NULL)
           {
             left->next=temp;
             break;
           }
           left->next=temp->next;
           left=temp;
           right=temp->next;
       }
       return newHead;
    }
};