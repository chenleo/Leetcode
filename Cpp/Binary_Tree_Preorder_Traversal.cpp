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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        if(root == NULL)
            return result;
        result.push_back(root->val);
        if (root -> left != NULL) {
            vector<int> result_left = preorderTraversal(root -> left);
            result.insert(result.end(), result_left.begin(), result_left.end());
        }
        if (root -> right != NULL) {
            vector<int> result_right = preorderTraversal(root -> right);
            result.insert(result.end(), result_right.begin(), result_right.end());
        }
        return result;
    }
};
