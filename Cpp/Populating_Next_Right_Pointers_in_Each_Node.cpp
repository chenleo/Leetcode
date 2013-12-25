/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if (root == nullptr) {
            return;
        }
        TreeLinkNode *leftWall = root;
        while (leftWall != nullptr) {
            TreeLinkNode *crossNode = leftWall;
            
            while (crossNode != nullptr) {
                if (crossNode->left != nullptr) {
                    crossNode->left->next = crossNode->right;
                }
                
                if (crossNode->right != nullptr && crossNode->next != nullptr) {
                    crossNode->right->next = crossNode->next->left;
                }
                
                crossNode = crossNode->next;
            }
            leftWall = leftWall->left;
            
        }
    }
};
