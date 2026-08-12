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
    int kthSmallest(TreeNode* root, int k) {
        vector<int>hold;
        queue<TreeNode*>q;
        if(!root) return -1;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            if(n==0) break;
            while(n--)
            {
                TreeNode* temp=q.front();
                hold.push_back(temp->val);
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        sort(hold.begin(),hold.end());
        return hold[k-1];
    }
};
