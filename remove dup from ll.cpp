class Solution {
  public:
     Node* removeDuplicates(Node* head) 
     {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        unordered_set<int>s;
        Node* temp=head;
        s.insert(temp->data);
         while(temp->next!=NULL)
         {
            if(s.find(temp->next->data)!=s.end())
            {
               temp->next=temp->next->next;
            }
            else
            {
               s.insert(temp->next->data);
               temp=temp->next;
            }
         }
       return head;
        
     }
};