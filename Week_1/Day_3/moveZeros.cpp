#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0; // points to where non zero element should go..
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){// if element is non zero move it at the front... already the zeros will be placed at the end
                swap(nums[i], nums[j]);
                j++;
            }

        }
    }
};