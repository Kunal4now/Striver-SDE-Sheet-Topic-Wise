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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *intersection_node = new ListNode();
        ListNode *ptrA = headA, *ptrB = headB;
        int sizeA = 0, sizeB = 0;
        while (ptrA || ptrB) {
            if (ptrA) {
                sizeA++;
                ptrA = ptrA -> next;
            }
            if (ptrB) {
                sizeB++;
                ptrB = ptrB -> next;
            }
        }
        ptrA = headA, ptrB = headB;
        while (sizeA != sizeB) {
            if (sizeA > sizeB) {
                sizeA--;
                ptrA = ptrA -> next;
            }
            else if (sizeB > sizeA) {
                sizeB--;
                ptrB = ptrB -> next;
            }
        }
        while (ptrA && ptrB) {
            if (ptrA -> val == ptrB -> val) {
                if (ptrA == ptrB) {
                    intersection_node -> next = ptrA;
                    return intersection_node -> next;
                }
            }
            ptrA = ptrA -> next;
            ptrB = ptrB -> next;
        }
        return NULL;
    }
};

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/