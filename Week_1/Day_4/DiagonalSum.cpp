#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //optimized.
        int n = mat.size();
        int m = mat.size();

        long long int prmSum = 0;
        long long int secSum = 0;

        //prmSum
        int i = 0;
        int j = 0;
        while(i < n && j < m){ //O(n)
            prmSum+= mat[i][j];
            i++;
            j++;
        }

        //postSum
        i = n-1;
        j = 0;
        while( i>= 0 && j<m){ //O(n)
            if(i == j){
                i--;
                j++;
                continue;
            }
            secSum += mat[i][j];
            i--;
            j++;
        }

        return prmSum + secSum;
        
    //     //brute force
    //     int n = mat.size();
    //     int m = mat[0].size();

    //     long long int prmDiagSum = 0;
    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<m; j++){
    //             if(i==j){ //primary diagonal
    //                 prmDiagSum += mat[i][j];
    //                 break; //when i becomes equal to j.. no need to go further..
    //                 // cout << mat[i][j] << " ";
    //             }
    //         }
    //     }
    //     // cout << "\n";
    //    long long int secDiagSum = 0;
    //     int i = n-1;
    //     int j = 0;
    //     while( i>=0 && j<m){
    //         if(i == j){
    //             i--;
    //             j++;
    //             continue;
    //         }
    //         secDiagSum += mat[i][j];
    //         // cout << mat[i][j] << " ";
    //         i--;
    //         j++;
    //     }

    //     return prmDiagSum + secDiagSum;
    }
};