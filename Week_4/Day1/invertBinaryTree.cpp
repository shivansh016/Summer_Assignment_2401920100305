#include<iostream>
using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }

        TreeNode* leftOld = invertTree(root->left);
        TreeNode* rightOld = invertTree(root->right);
        TreeNode* currOld = root;

        root->left = rightOld;
        root->right = leftOld;

        return currOld; // root ke nodes ko transform kar do, aur root return kardo...
    }
};