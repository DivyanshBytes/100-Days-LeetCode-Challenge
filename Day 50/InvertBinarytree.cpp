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
private:
    void invert(TreeNode* root){
        if(root == NULL)
            return;

        invert(root->right);
        invert(root->left);
        swap(root->left, root->right);
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
    return root;
    }
};