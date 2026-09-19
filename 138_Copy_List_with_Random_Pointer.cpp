#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr)
            return nullptr;

        unordered_map<Node*, Node*> mp;

        Node* curr = head;

        while (curr != nullptr) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        curr = head;

        while (curr != nullptr) {
            mp[curr]->next = curr->next ? mp[curr->next] : nullptr;
            mp[curr]->random = curr->random ? mp[curr->random] : nullptr;
            curr = curr->next;
        }

        return mp[head];
    }
};
