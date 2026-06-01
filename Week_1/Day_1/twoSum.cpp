class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // best and optimal approach
        vector<int> ans;
        unordered_map<int,int> m;

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];

            if(m.count(complement)){
                ans.push_back(m[complement]);
                ans.push_back(i);
                break;
            }

            m[nums[i]] = i; // insert if the complement is not present in the map.
        }

        return ans;
    }
};

    // vector<int> twoSum(vector<int>& nums, int target) {
    //     // better approach than brute force --> sorting and two pointer
        
    //     vector<pair<int, int>> vec; // we store the value and index so as to not lose the track of the idx..


    //     for(int i=0; i<nums.size(); i++){
    //         vec.push_back(make_pair(nums[i], i)); // as sorting is done on basis of the first element.. that's why we push the value of element first then the index
    //     }

    //     sort(vec.begin(), vec.end());

    //     int st = 0;
    //     int end = nums.size()-1;

    //     while(st < end){
    //         if((vec[st].first + vec[end].first) == target){
    //             return {vec[st].second, vec[end].second};
    //         }else if((vec[st].first + vec[end].first) > target){
    //             end--;
    //         }else{
    //             st ++;
    //         }

    //     }

    //     return {}; 
        
    // }