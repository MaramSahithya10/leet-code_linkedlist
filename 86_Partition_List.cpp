#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode before(0);
        ListNode after(0);

        ListNode* b = &before;
        ListNode* a = &after;

        while (head != nullptr) {
            if (head->val < x) {
                b->next = head;
                b = b->next;
            } else {
                a->next = head;
                a = a->next;
            }
            head = head->next;
        }

        a->next = nullptr;
        b->next = after.next;

        return before.next;
    }
};
