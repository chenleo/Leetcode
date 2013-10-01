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
    ListNode *rotateRight(ListNode *head, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<ListNode*> node_list;
        if (k == 0)
            return head;
        else if (head == NULL || head->next == NULL)
            return head;
        else
        {
            ListNode * temp = head;
            while(temp != NULL)
            {
                node_list.push_back(temp);
                temp = temp->next;
            }
            if (k%node_list.size() == 0)
                return head;
            else
            {
                k = k% node_list.size();
                node_list[node_list.size() - 1]->next = head;
                node_list[node_list.size() - k - 1]->next = NULL;
                return node_list[node_list.size() - k];
            }
        }
        
    }
};
