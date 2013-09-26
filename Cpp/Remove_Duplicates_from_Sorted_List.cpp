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
    ListNode *deleteDuplicates(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    if (head == NULL || head->next == NULL)
        return head;
    else
    {
        ListNode *temp = head;
        while (temp->next != NULL)  // to compare should have values.
        {
            if (temp-> val == temp->next->val)
            {
                ListNode* todel = temp->next;    
                temp->next = temp->next->next;
                todel = NULL;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    return head;
        
    }
};
