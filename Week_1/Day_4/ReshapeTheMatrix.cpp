#include<bits/stdc++.h>
using namespace std;

// t.c -> O(m*n)
// s.c => O(r*c)
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ans;
        if(n*m != r*c){ //when the required mat is not possible
            return mat;
        }
        else{
            vector<int> temp;
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    temp.push_back(mat[i][j]);
                    if(temp.size() == c){
                        ans.push_back(temp);
                        temp.clear();
                    }
                }
               
            }
            return ans;
        }

    }
};