#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //sliding window
        int sum = 0;
       for(int i=0; i<k; i++){
            sum += nums[i];
       }

        int maxSum = sum;
       int stIdx = 0;
       int endIdx = k;
       while(endIdx < nums.size()){
            sum -= nums[stIdx++];
            sum += nums[endIdx ++];

            maxSum = max(maxSum , sum);
       }

       return (double)maxSum/k;
    }
};