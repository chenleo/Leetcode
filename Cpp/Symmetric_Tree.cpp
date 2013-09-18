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

    bool isSymmetric(TreeNode *root) {

        // Start typing your C/C++ solution below

        // DO NOT write int main() function

        if (root == NULL)

        {

            return true;

        }

        return is_mirror(root->left, root->right);

    }

    bool is_mirror(TreeNode *right, TreeNode *left)

    {

        if (right == NULL && left == NULL)

        {

            return true;

        }

        else if (right == NULL || left == NULL || right->val != left->val)

        {

            return false;

        }

        else if (right->right == NULL && left-> right == NULL && right->left == NULL && left->left == NULL)

        {

            return true;

        }

        else

        {

            return (is_mirror(right->right, left->left) && is_mirror(right->left , left->right));

        }

    }

};
