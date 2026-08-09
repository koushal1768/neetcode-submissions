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
    int ans;
    void finder(TreeNode* root,int maxi)
    {    if(root==nullptr) return;
         if(root->val>=maxi)
         {
            maxi=root->val;
            ans+=1;
         }
         if(root->left) finder(root->left,maxi);
         if(root->right) finder(root->right,maxi);
    }
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        ans=0;
        int maxi = INT_MIN;
        finder(root,maxi);
        return ans;
    }
};
