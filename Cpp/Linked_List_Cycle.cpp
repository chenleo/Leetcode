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
    bool hasCycle(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if (head == NULL || head -> next == NULL)
            return false;
        auto p1 = head;
        auto p2 = head;
        while (p1 != NULL && p1 -> next != NULL) {
            p1 = p1->next->next;
            p2 = p2->next;
            if (p1 == p2)
                break;
        }
        if (p1 == NULL || p1-> next == NULL)
            return false;
        else 
            return true;
    }
};
