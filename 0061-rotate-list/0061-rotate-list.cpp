/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
      if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        ListNode* st = head;
        int n = 1;

        while (st->next != nullptr) {
            n++;
            st = st->next;
        }

        int back = k % n;
        if (back == 0) return head;

        st->next = head;

        st = head;
        int t = n - back - 1;

        while (t--) st = st->next;

        ListNode* newHead = st->next;
        st->next = nullptr;

        return newHead;
    }
};