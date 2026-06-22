#include<iostream>
using namespace std;

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL){ 
            return true;
        }
        if(p == NULL || q == NULL){ 
            return false;
        }

        if(p->val != q->val){
            return false; 
        }

        
// recu. call for left and right sub tree
        bool isLeftSTSame = isSameTree(p->left , q->left);
        bool isRightSTSame = isSameTree(p->right, q->right);

        if(isLeftSTSame && isRightSTSame){
            return true; 
        }
        return false; 
    }
};