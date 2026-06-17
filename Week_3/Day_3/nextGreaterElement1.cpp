#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mpp;
        
        for(int i = nums2.size()-1; i >= 0; i--){
            int current=nums2[i];
            while(!st.empty() && st.top()<=current){
                st.pop();
            }
            if(!st.empty()){
                mpp[current]=st.top();
            } else{
                mpp[current]=-1;
            }
            st.push(current);
        }
        vector<int> ans;
        for(int num : nums1){
            ans.push_back(mpp[num]);
        }
        return ans;

    }
};

//TC=O(N+M)
//SC=O(M)