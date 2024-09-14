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
    bool inorder(TreeNode* root, int sum, int &targetSum){
        if(root == NULL)
            return false;
        
        sum += root->val;
        
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum)
                return true;
        return false;
        }
        bool left = inorder(root->left, sum, targetSum);
        bool right = inorder(root->right, sum, targetSum);

    return left || right;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return inorder(root, sum, targetSum); 
    }
};