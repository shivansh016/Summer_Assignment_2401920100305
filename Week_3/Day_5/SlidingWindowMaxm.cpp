#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>  ans;
        priority_queue<pair<int, int>> pq;

        for(int i=0; i<k; i++){
            pq.push(make_pair(nums[i], i));
        }

        ans.push_back(pq.top().first);

        for(int i=k; i<nums.size(); i++){
            while(!pq.empty() && pq.top().second <= i-k){ // remember this condition of deleting the elements with idx less than i-k... as it checks whether the top of pq is an element which is other than the window.. since top element is the max element in a priority_queue... and when it's other than the window element we need to remove that...
                pq.pop();
            }
            pq.push(make_pair(nums[i], i));
            ans.push_back(pq.top().first);
        }

        return ans;
    }
};

// t.c. O(nlogk)...