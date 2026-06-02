#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;
        int currSum = 0;

        //using KADANE'S ALGO
        for(int i=0; i<n; i++){
            currSum += nums[i];
            maxSum = max(currSum, maxSum);
            if(currSum<0){
                currSum = 0;
            }
        }
        return maxSum;;
    }
};