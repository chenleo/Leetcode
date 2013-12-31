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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return buildFromPost(inorder, 0, inorder.size(), postorder, 0, postorder.size());
    }
    
    TreeNode *buildFromPost(vector<int> &inorder, int in_start, int in_end, vector<int> &postorder, int post_start, int post_end) {
        if (in_start < in_end && post_start < post_end) {
            vector<int>::iterator itr = find(inorder.begin()+in_start, inorder.begin()+in_end, postorder[post_end-1]);
            int left_tree_size = itr - (inorder.begin()+in_start);
            //construct tree
            TreeNode *root = new TreeNode(*itr);
            
            TreeNode *left = buildFromPost(inorder, in_start, in_start + left_tree_size, postorder, post_start, post_start+left_tree_size);
            TreeNode *right = buildFromPost(inorder, in_start+left_tree_size + 1, in_end, postorder, post_start+left_tree_size, post_end-1 );
            root->left = left;
            root->right = right;
            return root;
        }
        
        return nullptr;
    }
};
