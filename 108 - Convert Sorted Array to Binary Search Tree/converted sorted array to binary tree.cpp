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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums,0,nums.size());  //this call the build function recursively
    }
    TreeNode* build(vector<int>& n,int s,int e)
    {
        if(s==e)   //base case if start == end we return nullptr
        {
            return nullptr;
        }
        int mid=s+(e-s)/2;  //this find mid becasue we want balanced tree
        TreeNode* ro=new TreeNode(n[mid]);  //make mid the root node and when we call for left and right subtree and it make thier mid their root
        ro->left=build(n,s,mid); //recusively make the left subtree
        ro->right=build(n,mid+1,e); //recursively make the right subtree
        return ro;  //return the root 
    }
};