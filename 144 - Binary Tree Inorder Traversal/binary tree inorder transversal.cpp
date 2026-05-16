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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res; //vector to restore result
        inorder(root,res);  //calling the helper inorder function recursvily
        return res; //resturn the result
        
    }
    void inorder(TreeNode* root , vector<int>& n)
    {
        if(root==nullptr)  //base case if root is null return back
        {
            return;
        }
        n.push_back(root->val);  //add root value to vector
        inorder(root->left,n);  //move to left
        inorder(root->right,n); //move to right reciursively
    }
};