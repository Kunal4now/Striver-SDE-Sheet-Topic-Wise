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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *next_node, *cur = head;
        while (cur != NULL) {
            next_node = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = next_node;
        }
        return prev;
    }
};

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/