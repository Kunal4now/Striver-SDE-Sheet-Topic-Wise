/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *prev = node;
        while (node -> next != NULL) {
            prev = node;
            node = node -> next;
            prev -> val = node -> val;
            if (node -> next == NULL) {
                prev -> next = NULL;
                break;
            }
        }
    }
};

/*
Time Complexity: O(n)
*/

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

/*
Time Complexity: O(1)
*/