class Solution {
private:
    TreeNode* buildTree(vector<int>& preorder, int& index, int limit) {
        if (index >= preorder.size() || preorder[index] > limit)
            return NULL;

        TreeNode* root = new TreeNode(preorder[index]);
        index++;
        root->left = buildTree(preorder, index, root->val);
        root->right = buildTree(preorder, index, limit);

    return root;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return buildTree(preorder, index, INT_MAX);
    }
};
