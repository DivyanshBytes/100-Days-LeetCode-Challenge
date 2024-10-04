/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
    TreeNode* ans(TreeNode* cloned, TreeNode* target){
        if(cloned == NULL)
            return NULL;
        if(target->val == cloned->val)
            return cloned;

        TreeNode* leftResult = ans(cloned->left, target);
        if(leftResult != NULL) 
            return leftResult;

    return ans(cloned->right, target);
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return ans(cloned, target);
    }
};