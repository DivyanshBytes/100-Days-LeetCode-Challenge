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
    int RootSum(TreeNode* root, int &sum){
        if(root == NULL)
            return 0;

        int left = RootSum(root->left, sum);
        int right = RootSum(root->right, sum);
        sum += abs(left - right);

    return root->val + left + right;
    }
public:
    int findTilt(TreeNode* root) {
        int sum = 0;
        RootSum(root, sum);
    return sum;
    }
};