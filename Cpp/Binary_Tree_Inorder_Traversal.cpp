/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 //inorder:
 // 1 left subtree
 // 2 root
 // 3 right subtree
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector <int> result;
        // 1 boundary condition
        if (root == NULL)
            return result;
        if (root -> left != NULL)
            result = inorderTraversal(root -> left);
        result.push_back(root->val);
        if (root -> right != NULL)
        {
            vector<int> temp = inorderTraversal(root -> right);
            vector<int>::iterator itr = temp.begin();
            for (; itr< temp.end();itr++)
                result.push_back(*itr);
        }
        return result;
        
    }
};
