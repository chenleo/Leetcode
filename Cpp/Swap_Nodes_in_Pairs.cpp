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
    ListNode *swapPairs(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        //boundary condition:
        //1 empty tree
        if (head == NULL)
            return NULL;
        else if(head -> next == NULL)
            return head;
        else
        {
            ListNode * temp = head-> next ->next;
            ListNode* result = head->next;
            head -> next -> next = head;
            head->next = swapPairs(temp);
            
            return result;
        }
        
    }
};
