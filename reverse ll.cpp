class Solution {
  public:
    Node* reverseList(Node* head) 
    {
        //if(head==NULL || head->next==NULL)
        //{
          //  return head;
        //}
        Node* prev=NULL;
        Node* temp=head;
        while(temp!=NULL)
        {
            Node* next=temp->next;
             temp->next=prev;
            // temp->next=next;
            prev=temp;
            temp=next;
        }
     return prev;   
    }
};