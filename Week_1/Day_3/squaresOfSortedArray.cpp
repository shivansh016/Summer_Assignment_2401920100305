#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //Two pointer approach
//expalantion : as Array is sorted the largest(square) value will be either at the beginning or at the end
                //compare the beg. value with end and place the largest square at the end of the ans array.
        int n = nums.size();
        int start = 0;
        int end = n-1;

        vector<int> ans(n);

        int ansIdx = n-1;

        while(start<=end){
            if(abs(nums[start]) < (nums[end])){
                ans[ansIdx--] = nums[end] * nums[end];
                end --;
            }else{
                ans[ansIdx--] = nums[start] * nums[start];
                start ++;
            }
        }

        return ans;


        // Brute force -> O(nlogn), O(1) 
        // for(int i=0; i<nums.size(); i++){
        //     nums[i] = nums[i]*nums[i];
        // }
        // sort(nums.begin(), nums.end());
        // return nums;
    }
};