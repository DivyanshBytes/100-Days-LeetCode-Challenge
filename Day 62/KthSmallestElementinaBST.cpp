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
    void small(TreeNode* root, int &mini){
        if(root == NULL)
            return;

        small(root->left, mini);
        small(root->right, mini);

        if(root->val < mini)
            mini = root->val;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int mini = INT_MAX;
        small(root, mini);

        return mini + k - 1;
    }
};