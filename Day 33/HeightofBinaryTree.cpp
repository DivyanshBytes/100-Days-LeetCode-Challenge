class Solution{
    public:
    int height(struct Node* node){
        // code here 
        if (node == NULL)
            return 0;
        
        int ans = 0;
        int left = height(node->left);
        int right = height(node->right);
        
        ans = max(left,right) + 1;
        
    return ans;
    }
};