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
        if (root == nullptr) {
            return {}; 
        }
        
        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
           vector<int> currentLevel;
           int levelSize=q.size();
           for(int i=0;i<levelSize;i++){
                TreeNode* currentNode=q.front();
                q.pop();
                if(currentNode->left!=nullptr)
                    q.push(currentNode->left);
                if(currentNode->right!=nullptr)
                    q.push(currentNode->right);
                currentLevel.push_back(currentNode->val);
           }
           result.push_back(currentLevel);
        }
        
        return result;
    }
};

