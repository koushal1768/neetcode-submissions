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
    int maxi;
    int find(TreeNode* root)
    {
        if(!root) return 0;
        int a = find(root->left); 
        int b = find(root->right);
        a=max(a,0);
        b=max(b,0);
        maxi=max(maxi,root->val+a+b);
        return root->val+max(a,b);
    }
    int maxPathSum(TreeNode* root) {
      if(!root) return 0;
       maxi=INT_MIN;
       int a = find(root);
      return maxi;
    }
};
