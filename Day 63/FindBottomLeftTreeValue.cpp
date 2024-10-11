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
    void Find(TreeNode* root, int depth, int &maxDepth, int &ans){
        if(root == NULL)
            return;

        if(depth > maxDepth){
            maxDepth = depth;
            ans = root->val;
        }
        Find(root->left, depth + 1, maxDepth, ans);
        Find(root->right, depth + 1, maxDepth, ans);
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        int maxDepth = -1;
        int ans = -1;

        Find(root, 0, maxDepth, ans);
        return ans;
    }
};