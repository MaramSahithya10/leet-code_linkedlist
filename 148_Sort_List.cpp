#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* right = slow->next;
        slow->next = nullptr;

        ListNode* left = sortList(head);
        right = sortList(right);

        return merge(left, right);
    }

    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy(0);
        ListNode* curr = &dummy;

        while (a != nullptr && b != nullptr) {
            if (a->val < b->val) {
                curr->next = a;
                a = a->next;
            } else {
                curr->next = b;
                b = b->next;
            }
            curr = curr->next;
        }

        curr->next = (a != nullptr) ? a : b;

        return dummy.next;
    }
};
