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
        if(root==nullptr) return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(true)
        {
            int n=q.size();
           if(n==0)break;
           vector<int>te;
           while(n--)
           {
             TreeNode* temp=q.front();
             q.pop();
             te.push_back(temp->val);
             if(temp->left)q.push(temp->left);
             if(temp->right)q.push(temp->right);
           }
           ans.push_back(te);
        }
        return ans;
    }
};
