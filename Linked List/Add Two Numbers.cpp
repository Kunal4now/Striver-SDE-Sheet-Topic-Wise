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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, add = 0;
        ListNode *sum_list = new ListNode();
        ListNode *ptr = sum_list;
        while (l1 || l2 || carry) {
            add = (l1 ? l1 -> val : 0) + (l2 ? l2 -> val : 0) + carry;
            ptr -> next = new ListNode(add % 10);
            ptr = ptr -> next;
            carry = add / 10;
            if (l1) l1 = l1 -> next;
            if (l2) l2 = l2 -> next;
        }
        return sum_list -> next;
    }
};

/*
Time Complexity: O(n)
space_complexity: O(n)
*/