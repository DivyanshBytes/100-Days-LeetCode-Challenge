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
    void Counting(TreeNode* root, int maxi, int &count){
        if(root == NULL)
            return;

        if(root->val >= maxi)
            count++;

        maxi = max(maxi, root->val);

        Counting(root->left, maxi, count);
        Counting(root->right, maxi, count);
    }
public:
    int goodNodes(TreeNode* root) {
        int count = 0;
        Counting(root, root->val, count);
        return count;
    }
};