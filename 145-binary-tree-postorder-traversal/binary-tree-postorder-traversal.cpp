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
    void dfs(TreeNode *curr,vector<int> & ans){
        if(!curr){
            return ;
        }
        dfs(curr->left,ans);
        dfs(curr->right,ans);
        ans.push_back(curr->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int>v;
       dfs(root,v);
       return v;

    }
};