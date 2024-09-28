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
    int count(TreeNode* root, int cnt){
        if(root == NULL)
            return cnt;

        int left = count(root->left, cnt);
        int right = count(root->right, cnt);
    return left + right + 1;
    }
public:
    int countNodes(TreeNode* root) {
        int cnt = 0;
    return count(root, cnt);
    }
};