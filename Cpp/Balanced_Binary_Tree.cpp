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
    bool isBalanced(TreeNode *root) {
        if (root == NULL)
            return true;
        bool balanceRoot = abs(maxDepth(root->left) - maxDepth(root->right)) <= 1;
        return balanceRoot && isBalanced(root ->left) && isBalanced(root->right);
        
    }
    
    int minDepth(TreeNode *root) {
        if (root == NULL)
            return 0;
        return 1 + min(minDepth(root -> left), minDepth(root -> right));
    }
    
    int maxDepth(TreeNode *root) {
        if (root == NULL)
            return 0;
        return 1 + max(maxDepth(root -> left), maxDepth(root -> right));
    }
};
