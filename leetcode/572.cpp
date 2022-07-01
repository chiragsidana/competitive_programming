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
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root==NULL)return false;
        bool ans=match(root,subroot);
        if(ans)return true;
        return(isSubtree(root->left,subroot) or isSubtree(root->right,subroot));
        
    }
    bool match(TreeNode* root,TreeNode* subroot){
        if(root==NULL and subroot==NULL)return true;
        if(root==NULL or subroot==NULL)return false;
        if(root->val!=subroot->val)return false;
        return(match(root->left,subroot->left)and match(root->right,subroot->right));
    }
};
