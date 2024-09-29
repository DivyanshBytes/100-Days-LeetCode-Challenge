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
    int leftSum(TreeNode* root, int &sum){
        if(root == NULL)
            return sum;

        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL)
            sum += root->left->val;
        leftSum(root->left, sum);
        leftSum(root->right, sum);
    return sum;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
    return leftSum(root, sum);
    }
};