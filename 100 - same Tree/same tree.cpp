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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr)  //if both are nullptr return true;
        {
            return true;
        }
        if(p && q &&p->val==q->val)  //check if their value is equal and they are both none null
        {
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);  //check for left and right and return that
        }
        return false;  //else return false means value is not equal
    }
    
};