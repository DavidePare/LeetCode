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
    //Take height of the tree
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int mLeft=maxDepth(root->left);
        int mRight=maxDepth(root->right);
        return max(mLeft,mRight)+1;
    }
};