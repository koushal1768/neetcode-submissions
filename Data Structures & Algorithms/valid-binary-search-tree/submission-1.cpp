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
    bool finder(TreeNode* root,long long a , long long b)
    {
        if(root==nullptr ) return true;

        if(root->val<=a || root->val>=b) return false;

        return finder(root->left,a,root->val) && finder(root->right,root->val,b);
    }
    bool isValidBST(TreeNode* root) {
        return finder(root,LLONG_MIN,LLONG_MAX);
    }
};
