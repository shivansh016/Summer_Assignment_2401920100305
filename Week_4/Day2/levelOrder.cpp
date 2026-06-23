#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL){
            return {};
        }

    
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);

        vector<vector<int>> ans;
        vector<int> temp;

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            
            if(curr == NULL){
                // cout << "\n";
                ans.push_back(temp);

                if(q.empty()){ //to avoid the infinite loop
                    break;
                }
                q.push(NULL);
                temp.clear();//need to clear the temp vector for the next level nodes.
            }else{
                // cout << curr->val << " ";
                temp.push_back(curr->val); //keep adding the same level elements.
                if(curr->left != NULL){
                    q.push(curr->left);//pushing in the queue only when the node is not nullptr
                }
                if(curr->right != NULL){
                    q.push(curr->right);//pushing in the queue only when the node is not nullptr.
                }
            }
        }

        return ans;
    }
};