class Solution {
    int func(TreeNode* root,int a){
        int r=-1,l=-1;
        if(root->right) 
        r=func(root->right,a);
        if(!root->right)
        root->val=root->val+a;
        else root->val=root->val+r;
        if(root->left)
        l=func(root->left,root->val);
        if(!root->left) return root->val;
        return l;
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return root;
        func(root,0);
        return root;
    }
};
