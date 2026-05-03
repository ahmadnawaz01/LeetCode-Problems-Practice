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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;  //to store results
        tranversal(root,result); //calling the helper tanversl
        return result; 

    }
    void tranversal(TreeNode* n,vector<int>&res)
    {
        if(n==nullptr)  //base case return null if node is nullptr
        {
            return;
        }
        tranversal(n->left,res);  //move to the most left and explore it
        res.push_back(n->val);
        tranversal(n->right,res);  //move to right after backtracking
    }
};