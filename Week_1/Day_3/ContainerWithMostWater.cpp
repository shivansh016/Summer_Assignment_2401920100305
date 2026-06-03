#include<bits/stdc++.h>
using namespace std;


//explanation : 
//Brute force 
 
/*
    we do find the area for each stick/height like 0,1  0,2  0,3 .... 0,8 then 1,2 1,3 ... 1,8 all the way till 7,8
    then we find the max area... 
    -> T.c -> not good.
*/

// Optimized:

/*
    we want the max area and area = width* height
    so we begin with max width i.e. left = 0, right = n-1
    then we find the area 
    and move left/right -> as per the stick size... if the left stick is small -> left/i ++ , else right/j --.
    
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int i=0;
        int j = n-1;

        int wdth, area = 0;
        while(i<=j){
            wdth = j-i;
            area = max(area, wdth*min(height[i], height[j]));
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return area;
    }
};