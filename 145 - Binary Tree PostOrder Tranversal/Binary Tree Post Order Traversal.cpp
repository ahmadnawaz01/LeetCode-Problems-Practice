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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;  //this vecctor is to store result
        postorder(root,res); //this call the helper function postorder
        return res; //this return the result

    }
    void postorder(TreeNode *n, vector<int>& s)  //this take the node and res vecotr with reference
    {
        if(n==nullptr)  //base case if it nul return
        {
            return;
        }
        postorder(n->left,s);  //move to left
        postorder(n->right,s); //move to right
        s.push_back(n->val);  //then explore and push to result

    }

};