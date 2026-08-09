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
bool find(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if(root==p || root == q) return true;
    else{ bool a=0,b=0;
        if(root->left) a=find(root->left,p,q);
        if(root->right) b=find(root->right,p,q);
        return a || b;
    }
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q) return root;
        else{
            bool a=0,b=0;
            if(root->left)
            {
                a = find(root->left, p ,q);
            }
            if(root->right)
            {
                b = find(root->right, p ,q);
            }
            if(a&&b)return root;
            else if(a && !b) return lowestCommonAncestor(root->left,p,q);
            else return lowestCommonAncestor(root->right,p,q);
        }
    }
};
