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
    void solve(TreeNode* root){
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL)return;
        if(root->left!=NULL)solve(root->left);
        if(root->right!=NULL)solve(root->right);
        TreeNode* temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
    TreeNode* invertTree(TreeNode* root) {
        solve(root);
        return root;
    }
};
