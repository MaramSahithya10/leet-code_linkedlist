#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* curr = head;

        while (curr != nullptr) {
            n++;
            curr = curr->next;
        }

        int size = n / k;
        int extra = n % k;

        vector<ListNode*> result;

        curr = head;

        for (int i = 0; i < k; i++) {
            result.push_back(curr);

            int partSize = size + (i < extra ? 1 : 0);

            for (int j = 1; j < partSize && curr != nullptr; j++) {
                curr = curr->next;
            }

            if (curr != nullptr) {
                ListNode* next = curr->next;
                curr->next = nullptr;
                curr = next;
            }
        }

        return result;
    }
};
