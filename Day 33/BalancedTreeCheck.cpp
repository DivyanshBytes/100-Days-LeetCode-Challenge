class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool,int> optimize(Node *root){
        pair<bool,int> p = make_pair(true,0);
        if(root == NULL)
            return p;
            
        pair<bool,int> left = optimize(root->left);
        pair<bool,int> right = optimize(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <= 1;
        
        pair<bool,int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff)
            ans.first = true;
        else
            ans.first = false;
            
    return ans;
    }
    bool isBalanced(Node *root){
        //  Your Code here
        return optimize(root).first;
    }
};