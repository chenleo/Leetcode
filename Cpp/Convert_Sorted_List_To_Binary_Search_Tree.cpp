/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    vector<ListNode* > list_array;
    if (head == NULL)
        return NULL;
    else if (head -> next == NULL)
    {
        TreeNode* result = new TreeNode(head->val);
        return result;
    }
    else if (head -> next -> next ==NULL)
    {
        TreeNode* result = new TreeNode(head->next->val);
        result->left = new TreeNode(head->val);
        return result;
    }
    
    
    else
    {
    ListNode* temp = head;
    while (temp != NULL)
    {
        list_array.push_back(temp);
        temp = temp->next;
    }
    
    vector<ListNode*>::iterator itr = list_array.begin();
    vector<ListNode*>::iterator mid = list_array.begin() + (list_array.end()-list_array.begin())/2;    //or begin + (end - begin)/2
    
    TreeNode* result = new TreeNode((*mid) -> val);
    (*(mid-1)) -> next = NULL;
    result->left = sortedListToBST(head);
    result->right = sortedListToBST(*(mid+1));
    
    return result;
    }
    }
    
    
};
