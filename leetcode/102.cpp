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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        q.push(root);
        while(q.size()){
            int s=q.size();
            vector<int> a;
            while(s--){
                TreeNode*c=q.front();
                a.push_back(c->val);
                if(c->left!=NULL)q.push(c->left);
                if(c->right!=NULL)q.push(c->right);
                q.pop();
                
                
            }
            ans.push_back(a);
        }
        return ans;
    }
};
