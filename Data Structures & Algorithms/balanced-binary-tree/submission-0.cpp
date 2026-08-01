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
    
    int solve(TreeNode* root)
    {   
        if(!root->left && !root->right) return 1;
        int l=0,r=0;
        if(root->left)
        {
            l=solve(root->left);
        }
        if(root->right)
        {
            r=solve(root->right);
        }
        if(l==-1 || r==-1) return -1;
        if(abs(l-r)>1) return -1;
        else return 1+max(l,r);
        
    }
    bool isBalanced(TreeNode* root) {
      if(!root) return 1;
      if(solve(root)==-1) return 0;
      else return 1;
        
    }
};
