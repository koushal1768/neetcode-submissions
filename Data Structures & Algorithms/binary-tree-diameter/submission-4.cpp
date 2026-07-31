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
    int diameter;
    int solve(TreeNode* root)
    {
        if(!root->left && !root->right) return 0;
        int l=0;
        int r=0;
        if(root->left)
        {
            l=1+solve(root->left);
        }
        if(root->right)
        {
            r=1+solve(root->right);
        }
        diameter=max(diameter,r+l);
        return max(r,l);
    } 
    int diameterOfBinaryTree(TreeNode* root) {
        diameter=0;
        if(!root) return 0;
        int a=solve(root);
        return diameter;
    }
};
