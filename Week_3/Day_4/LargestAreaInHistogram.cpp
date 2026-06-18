#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        int maxi=0;
        for(int i=0;i<=n;i++){
            int curr_height=(i==n)?0:heights[i];
            while(!st.empty() && heights[st.top()]>curr_height){
                int height=heights[st.top()];
                st.pop();
                int R=i;
                int L=st.empty()?-1:st.top();
                int width=R-L-1;
                maxi=max(maxi,height*width);
            }
            st.push(i);
        }
        return maxi;
    }
};
//TC=O(N)
//SC=O(N)