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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (l1 == NULL && l2 == NULL)
            return NULL;
        else if (l1 == NULL)
            return l2;
        else if (l2 == NULL)
            return l1;
        else
        {
            int result = l1->val + l2->val;
            int reminder = result/10;
            ListNode* toReturn = new ListNode(result%10);
            //toReturn->val = result%10;
            l1 = l1 -> next;
            l2 = l2 -> next;
            ListNode* forReturn = toReturn;
            while (l1 != NULL && l2 != NULL)
            {
                result = l1->val + l2->val + reminder;
                reminder =  result/10;
                ListNode * temp = new ListNode(result % 10);
                //temp -> val = result % 10;
                toReturn ->next = temp;
                l1 = l1 -> next;
                l2 = l2 -> next;
                toReturn = toReturn -> next;
            }

            while (l1 != NULL)
            {
                result = l1->val + reminder;
                reminder =  result/10;
                ListNode * temp = new ListNode(result % 10);
                //temp -> val = result % 10;
                toReturn ->next = temp;
                l1 = l1 -> next;
                toReturn = toReturn -> next;
            }

            while (l2 != NULL)
            {
                result = l2->val + reminder;
                reminder =  result/10;
                ListNode * temp = new ListNode(result % 10);
                //temp-> val = result % 10;
                toReturn ->next = temp;
                l2 = l2 -> next;
                toReturn = toReturn -> next;
            }

            if (reminder != 0)
            {
                ListNode * temp = new ListNode(reminder % 10);
                //temp-> val = reminder % 10;
                toReturn ->next = temp;
                //temp = temp -> next;
                //toReturn = toReturn -> next;
            }
            return forReturn;
        }

    }
};
