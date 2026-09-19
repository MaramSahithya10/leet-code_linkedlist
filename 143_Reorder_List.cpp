#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;

        while (second != nullptr) {
            ListNode* next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }

        second = prev;

        while (second != nullptr) {
            ListNode* firstNext = head->next;
            ListNode* secondNext = second->next;

            head->next = second;
            second->next = firstNext;

            head = firstNext;
            second = secondNext;
        }
    }
};
