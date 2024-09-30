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
    int Diameter(TreeNode* root, int &dia){
        if(root == NULL)
            return 0;

        int left = Diameter(root->left, dia);
        int right = Diameter(root->right, dia);

        dia = max(dia, left+right);

        return max(left,right) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        Diameter(root, dia);
    return dia;
    }
};