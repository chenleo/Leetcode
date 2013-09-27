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
    int sumNumbers(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        //1 boundary condition;
        return sumNumLevel(root, 0);
        
    }
    
    int sumNumLevel(TreeNode *root, int father)
    {
        if (root == NULL)
        {
            return father * 10;
        }
        else if (root -> left == NULL && root -> right == NULL )
        {
            return father * 10 + root -> val;
        }
        else if (root -> right == NULL)
        {
            int left_father = father * 10 + root -> val;
            return sumNumLevel(root -> left, left_father);
        }
        else if (root -> left == NULL)
        {
            int right_father = father * 10 + root -> val;
            return sumNumLevel(root -> right, right_father);
        }
        else
        {
            int both_father = father * 10 + root -> val;
            return sumNumLevel(root -> left, both_father) + sumNumLevel(root -> right, both_father);
        }
        
    }
};
