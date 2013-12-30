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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(slow && slow->next && fast && fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                
                int cycleLen = 0;
                do {
                    ++cycleLen;
                    fast = fast->next;
                } while (fast != slow);
                
                //Find the start of the cycle
                slow = head;
                fast = head;
                
                //fast advance
                while (cycleLen!=0) {
                    --cycleLen;
                    fast = fast->next;
                }
                
                //both advance
                while(slow!=fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;//or fast
            }
        }
        
        return nullptr;
    }
};
