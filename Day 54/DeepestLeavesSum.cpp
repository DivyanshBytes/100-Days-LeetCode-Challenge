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
    int deepestLevel;
    int sum;

    void findSum(TreeNode* root, int depth){
        if(root == NULL)
            return ;
        if(root->left == NULL && root->right == NULL){
            if(depth > deepestLevel){
                deepestLevel = depth;
                sum = root->val;
            }
            else if(depth == deepestLevel)
                sum += root->val;
        }
        findSum(root->left, depth + 1);
        findSum(root->right, depth + 1);
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        deepestLevel = 0;
        sum = 0;
        findSum(root, 1);
    return sum;
    }
};