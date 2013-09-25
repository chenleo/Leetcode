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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        //TreeNode *root;
        if (num.size() == 0)
            {
                //root = NULL;
                return NULL;
            }
        else if (num.size() == 1)
        {

            TreeNode* root = new TreeNode(num[0]); // Imporant to review
            return root;
        }
        else if (num.size() == 2)
        {
            TreeNode* root = new TreeNode(num[1]);
            root->left = new TreeNode(num[0]);
            
            return root;
        }
        else if (num.size() == 3)
        {
            TreeNode* root = new TreeNode(num[1]);
            root->left = new TreeNode(num[0]);
            root->right = new TreeNode(num[2]);
            return root;
        }
        else
        {
            // find vector middle
            vector<int>::iterator itr = num.begin();
            vector<int>::iterator mid = itr + num.size()/2;
            TreeNode* root = new TreeNode(*mid);
            
            vector<int> num_left;
            num_left.assign(itr, mid);
            
            vector<int> num_right;
            num_right.assign(mid + 1 , num.end());
            
            root -> left = sortedArrayToBST(num_left);
            root -> right = sortedArrayToBST(num_right);
            
            return root;
        }
    }
};
