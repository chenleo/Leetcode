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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<ListNode*> vector_ptr_list_index;
        
        //1 when to return head without do any other operation?
        if (head == NULL || n == 0)
        {
            return head;
        }
        
        
        //2
        else 
        {
            ListNode* ptr_node_count = head;
            while (ptr_node_count != NULL)
            {
                vector_ptr_list_index.push_back(ptr_node_count);
                ptr_node_count = ptr_node_count->next;
            }
            if(vector_ptr_list_index.size() == 1)
            {
                return NULL;
            }
            
            
            
            vector<ListNode*>::iterator itr = vector_ptr_list_index.end() - n;
            if(itr == vector_ptr_list_index.begin())
            {
                head = head->next;
                (*(itr)) = NULL;
                return head;
            }
            (*(itr-1))->next = (*(itr-1))->next-> next;
            (*(itr)) = NULL;
        }
        
        //n return head;
        return head;
        
    }
};
