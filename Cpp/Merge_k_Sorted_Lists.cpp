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
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        ListNode *result=nullptr;
        if (lists.size() == 0)
            return result;
        for (int i = 0; i< lists.size(); i++) {
            result = mergeTwoLists(result, lists[i]);
        }
        return result;
    }
    
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (l1 == NULL && l2 == NULL)
            return NULL;
        else if (l1 == NULL)
        {
            return l2;
        }
        else if (l2 == NULL)
        {
            return l1;
        }
        else 
        {
            ListNode * result;
            ListNode * result_return;
            if (l1->val > l2->val)
            {
                result = l2;
                result_return = l2;
                l2 = l2 -> next;
            }
            else
            {
                result = l1;
                result_return = l1;
                l1 = l1 -> next;
            }
            while (l1 != NULL && l2 != NULL )
            {
               if (l1->val > l2->val)
                {
                    result->next = l2;
                    l2 = l2 -> next;
                    result = result ->next;
                }
                else
                {
                    result->next = l1;
                    l1 = l1 -> next;
                    result = result ->next;
                } 
            }
            if (l1 != NULL)
            {
                result -> next = l1;
            }
            if (l2 != NULL)
            {
                result -> next = l2;
            }
            return result_return;
        }
        
    }
};
