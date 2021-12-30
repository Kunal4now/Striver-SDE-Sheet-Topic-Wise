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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *merged_list = new ListNode();
        ListNode *ptr = merged_list;
        int first = INT_MAX, second = INT_MAX;
        while (list1 && list2) {
            first = (list1 ? list1 -> val : first);
            second = (list2 ? list2 -> val : second);
            ptr -> next = new ListNode(min(first, second));
            ptr = ptr -> next;
            if (first < second) {
                list1 = list1 -> next;
            }
            else {
                list2 = list2 -> next;
            }
        }
        ptr -> next = (list1 ? list1 : list2);
        return merged_list -> next;
    }
};

/*
APPROACH: 
=> In this solution we just keep comparing the heads of two nodes and whichever node is smaller
    we put it into our new merged_list
=> When either of the list is empty we can simply add whole list that is left to our new list
*/

/*
Time Complexity: O(n + m)
Space Complexity: O(n + m)
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *merged_list = new ListNode();
        ListNode *ptr = merged_list;
        int first = INT_MAX, second = INT_MAX;
        while (list1 && list2) {
            if (list1 -> val < list2 -> val) {
                ptr -> next = list1;
                ptr = list1;
                list1 = list1 -> next;
            }
            else {
                ptr -> next = list2;
                ptr = list2;
                list2 = list2 -> next;
            }
        }
        ptr -> next = (list1 ? list1 : list2);
        return merged_list -> next;
    }
};

/*
APPROACH: 
=> Instead of creating a new list we can just modify the poiners and connect them into one list
*/

/*
Time Complexity: O(n + m)
Space Complexity: O(1)
*/
