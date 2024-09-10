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
    void postorder(TreeNode* root, int &sum){
        if(root == NULL)
            return;

        if(root->left && root->left->left == NULL && root->left->right == NULL) {
            sum += root->left->val;  
        }
        postorder(root->left, sum);
        postorder(root->right, sum);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        postorder(root, sum);
        return sum;
    }
};