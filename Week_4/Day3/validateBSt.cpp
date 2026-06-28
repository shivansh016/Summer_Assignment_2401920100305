class Solution {
public:
    bool helperBST(TreeNode* root, TreeNode* min, TreeNode* max){
        if(root == NULL){
            return true;
        }

        if(min != NULL && root->val <= min->val){
            return false;
        }
        if(max != NULL && root->val >= max->val){
            return false;
        }

        bool left = helperBST(root->left, min, root);
        bool right = helperBST(root->right, root, max);

        return left && right;
    }
    bool isValidBST(TreeNode* root) {
        return helperBST(root, NULL , NULL);
    }
};
