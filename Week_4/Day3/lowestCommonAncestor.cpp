class Solution {
public:

    bool rootToNode(TreeNode* root, TreeNode* n, vector<TreeNode*>& v){
        if(root == NULL){// jab search karte karte null root pe pahuch jao.. 
            return false;
        }

        v.push_back(root);
        if(root == n){
            return true;
        }

        bool left= rootToNode(root->left, n, v);
        bool right = rootToNode(root->right, n, v);

        if(left || right ){ // left ya right kahi bhi node mile to true return karo
            return true;
        }else{ // otherwise popback karo aur false return karenge..
            v.pop_back();
            return false;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1;
        vector<TreeNode*> path2;

        rootToNode(root, p, path1);
        rootToNode(root, q, path2);

        TreeNode* lca = NULL;

        for(int i=0, j=0; i<path1.size() && j<path2.size(); i++, j++){
            if(path1[i] != path2[j]){
                return lca;
            }else{
                lca = path1[i];
            }
        }

        return lca;
    }
};