/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root)  //if root is nullptr means it reaches the leaf node it depth is 0
        {
            return 0;
        }
        return 1+max(maxDepth(root->left),maxDepth(root->right));  //take max depth from left and right subtree and add 1 as we move
        
    }
};