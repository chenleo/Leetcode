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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        return buildFromPreorder(preorder, 0, preorder.size(), inorder, 0, inorder.size());
    }
    
    TreeNode *buildFromPreorder(vector<int> &preorder,int pre_start, int pre_end, vector<int> &inorder, int in_start, int in_end) {
        if (pre_end > pre_start && in_end > in_start) {
            vector<int>::iterator itr = find(inorder.begin() + in_start, inorder.end()+in_end, preorder[pre_start]);
            int leftSize = itr - (inorder.begin() + in_start);
        
            TreeNode *root = new TreeNode(preorder[pre_start]);
            //root->val = preordor[pre_start];
            TreeNode *left = buildFromPreorder(preorder, pre_start+1, pre_start+1+leftSize, inorder, in_start, itr - inorder.begin());
            TreeNode *right = buildFromPreorder(preorder, pre_start+1+leftSize, pre_end, inorder, itr - inorder.begin()+1,in_end);
            root->left = left;
            root->right = right;
            return root;
        }
        return NULL;
    }
};
