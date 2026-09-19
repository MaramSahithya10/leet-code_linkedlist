class Solution {
  public:
    int getKthFromLast(Node* head, int k) 
    {
       Node* left=head;
       Node* right=head;
       for(int i=0;i<k;i++)
       {
           if(right==NULL)
           {
               return -1;
           }
           right=right->next;
       }
       while(right!=NULL)
       {
           left=left->next;
           right=right->next;
       }
       return left->data; 
    }
};