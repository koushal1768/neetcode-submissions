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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        while(1)
        {
            int a;
            int n=q.size();
            if(n==0)break;
            while(n--)
            {
                TreeNode* temp=q.front();
                q.pop();
                a=temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                
            }
            ans.push_back(a);
        }
        return ans;
    }
};
