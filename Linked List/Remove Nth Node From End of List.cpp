class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode *ptr = head, *prev;
        while (ptr != NULL) {
            ptr = ptr -> next;
            size++;
        }
        if (size == n) {
            head = head -> next;
            return head;
        }
        ptr = head;
        for (int i = 1; i < (size - n); i++) {
            ptr = ptr -> next;
        }
        ListNode *curr = ptr -> next;
        ptr -> next = curr -> next;
        return head;
    }
};

/*
Time Complexity: O(n) + O(n) one for traversal and another to iterate to nth node
Space Complexity: O(1);
*/