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
public:
    void inOrder(TreeNode* list, int& res) {
        if(list==nullptr) 
            return;
        inOrder(list->left, res);
        int tempSum = 0;
        int counter = 0;
        mergerFun(list, res, tempSum, counter);
        if((list->val) == tempSum/counter) res++;

        inOrder(list->right, res);
    }
    void mergerFun(TreeNode* list, int& res, int& tempSum, int& counter) {
        if(list==nullptr) 
            return;
        mergerFun(list->left, res, tempSum, counter);
        tempSum += list->val;
        counter++;
        mergerFun(list->right, res, tempSum, counter);
    }
    int averageOfSubtree(TreeNode* root) {
        int res = 0;
        inOrder(root, res);
        return res;
    }
};