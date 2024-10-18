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
    TreeNode* prev;
    void Preorder(TreeNode* curr){
        if(curr == NULL)
            return;

        if(prev != NULL){
            prev->left = NULL;
            prev->right = curr;
        }
        TreeNode* Right = curr->right;
        prev = curr;
        Preorder(curr->left);
        Preorder(Right);
    }
public:
    void flatten(TreeNode* root) {
        prev = NULL;
        Preorder(root);
    }
};