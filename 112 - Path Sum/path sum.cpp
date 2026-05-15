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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)  //if tree is empty return false;
        {
            return false;
        }
        if(root->left==nullptr && root->right==nullptr)  //if it is a leaf node return the remain equal to root value true else false
        {
            return targetSum==root->val;
        }
        int remain=targetSum-root->val;  //calculate remaining by subtracting the nodoe value from target and now reaming is new target
        return hasPathSum(root->left,remain) || hasPathSum(root->right,remain);  //check either left or right that their remain is equal to root value return true 

    }
};