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
    int maxLevelSum(TreeNode* root) {
        if(root == NULL)
            return 0;
            
        int maxSum = INT_MIN;
        int maxLevel = 0;
        int currLevel = 1;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int levelSize = q.size();
            int levelSum = 0;
            for(int i=0; i<levelSize; i++){
                TreeNode* temp = q.front();
                q.pop();
                levelSum += temp->val;
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
            }
            if(maxSum < levelSum){
                maxSum = levelSum;
                maxLevel = currLevel; 
            }
            currLevel++;
        }
    return maxLevel;
    }
};