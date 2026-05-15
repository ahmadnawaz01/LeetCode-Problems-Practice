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
    int minDepth(TreeNode* root) {
        if(root==nullptr)  //if root is empty just return 0
        {
            return 0;
        }
        if(root->left==nullptr)  //if left subtree is null explaore  the right subtree
        {
            return 1+minDepth(root->right);
        }
        if(root->right==nullptr)  //if right subtree is null explore the left subtree
        {
            return 1+minDepth(root->left);
        }
        return 1+min(minDepth(root->left),minDepth(root->right));  //if both subtree return the minimum of them

    }
};