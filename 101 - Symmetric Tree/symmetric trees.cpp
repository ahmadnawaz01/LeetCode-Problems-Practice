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
    bool isSymmetric(TreeNode* root) {
        return checkmirror(root,root);  //we call the recursive helper function who check their left and right subtree are mirror or not
    }
    bool checkmirror(TreeNode* l,TreeNode* r)  //helper function
    {
        if(l==nullptr && r ==nullptr)  //if left and right are nullptr return true becuz both are equal
        {
            return true;
        }
        if(l==nullptr || r==nullptr)  // if someone of that one is none true means this  is not symmetric just return false
        {
            return false;
        }
        if(l->val==r->val)  //if value of left of left subtree and right subtree are equal and same for right of left subtree and left of right subtree is equal
        {
            return checkmirror(l->left,r->right) && checkmirror(l->right,r->left);  //if these both return true then the tree is symmetric else not
        }
        return false;  //if values is not equal means return false
    }
};