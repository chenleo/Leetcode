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
    bool isValidBST(TreeNode *root) {
        return validBST(root, INT_MIN, INT_MAX);
    }
    
    bool validBST(TreeNode *root, int lowBoundary, int highBoundary) {
        if (root == NULL)
            return true;
        else if (root->val <= lowBoundary || root->val >= highBoundary) {
            return false;
        }
        else {
            return validBST(root->left, lowBoundary, min(highBoundary, root->val)) && validBST(root->right, max(lowBoundary, root->val), highBoundary);
        }
    }
};
