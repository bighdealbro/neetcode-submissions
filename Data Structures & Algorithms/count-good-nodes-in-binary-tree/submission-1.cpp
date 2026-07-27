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
    int goodNodes(TreeNode* root) {
        int res=dfs(root,root->val);
        return res;
    }
    int dfs(TreeNode *node,int maxVal){
        int res;
        if(node==nullptr)
            return 0;
        (node->val>=maxVal)?res=1:res=0;
        maxVal=max(node->val,maxVal);
        res+=dfs(node->right,maxVal);
        res+=dfs(node->left,maxVal);
        return res;
    }
    
};
