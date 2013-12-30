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
    void flatten(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        //boundary condition
        if (root == NULL)
        {
            return;
        }
        
        else if(root -> right == NULL && root -> left == NULL)
        {
            return;
        }
        
        else if (root -> right == NULL)
        {
            root -> right = root -> left;
            root -> left = NULL;
            flatten(root->right);
            return;
        }
        
        else if (root -> left == NULL)
        {
            flatten(root->right);
            return;
        }
        
        else 
        {
            TreeNode *temp = root -> right;
            root -> right =  root -> left;
            root -> left = NULL;
            TreeNode *search_NULL = root -> right;
            while (search_NULL -> right != NULL)
            {
                search_NULL = search_NULL -> right;
            }
            search_NULL -> right = temp;
            //delete[] temp;
            flatten(root->right);
            return;
        }
        
    }
};
