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
    int maxDiff;
    void findMaxDiff(TreeNode* root, TreeNode* child) {
        if(root == NULL|| child == NULL)
            return;
        
        maxDiff = max(maxDiff, abs(root->val - child->val));
        findMaxDiff(root, child->left);
        findMaxDiff(root, child->right);
    }
    void findMax(TreeNode* root) {
        if(root == NULL|| root->left == NULL && root->right == NULL)
            return;
         
         findMaxDiff(root, root->left);
         findMaxDiff(root, root->right);

         findMax(root->left);
         findMax(root->right);
    }
    int maxAncestorDiff(TreeNode* root) {
        maxDiff = INT_MIN;
        findMax(root);   
        return maxDiff;     
    }
};