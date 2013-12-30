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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector<vector<int> > result;
        levelBottom(root, 0, result);
        //reverse(result.begin(), result.end());
        for (int i =1; i< result.size(); i+=2)
            reverse(result[i].begin(), result[i].end());
        return result;
        
    }
    
    void levelBottom(TreeNode *root, int level, vector<vector<int> > &currentResult) {
        if (root == NULL)
            return;
        else if (level >= currentResult.size()) {
            vector<int> temp;
            temp.push_back(root->val);
            currentResult.push_back(temp);
        }
        else {
            currentResult[level].push_back(root->val);
        }
        levelBottom(root->left, level+1, currentResult);
        levelBottom(root->right, level+1, currentResult);
    }
};
