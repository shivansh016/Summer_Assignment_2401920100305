#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;

        int r = mat.size();
        int c = mat[0].size();

        int srow = 0;
        int scol = 0;
        int erow = r - 1;
        int ecol = c - 1;


       
        while(srow <= erow && scol <= ecol){

            //top
            for(int j=scol; j<=ecol; j++){
                ans.push_back(mat[srow][j]);
            }

            //right

            for(int i=srow+1; i<=erow; i++){
                ans.push_back(mat[i][ecol]);
            }

            //bottom

            for(int j=ecol-1; j>= scol; j--){
                if(srow == erow){
                    break;
                }
                ans.push_back(mat[erow][j]);
            }

            //left

            for(int i=erow-1; i>srow; i--){
                if(ecol == scol ){
                    break;
                }
                ans.push_back(mat[i][scol]);
            }

            srow ++;
            scol ++;
            erow --;
            ecol --;
        }
           
           

        return ans;
        
        
    }
};