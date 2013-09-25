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
    int maxDepth(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        // int result = 0;
        if (root == NULL)
            return 0;
        else if (root -> right == NULL && root ->left ==NULL)
        {
            return 1;
        }
        else if (root -> right == NULL)
        {
            return 1 + maxDepth(root -> left);
        }
        else if (root -> left == NULL)
        {
            return 1 + maxDepth(root -> right);
        }
        else
        {
            return 1 + max(maxDepth(root -> right), maxDepth(root -> left));
        }
        // return result;
    }
};
