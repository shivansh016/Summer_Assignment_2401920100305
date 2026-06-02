#include<bits/stdc++.h>
using namespace std;
class Solutino{
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
           
        for(int i = 0; i<nums.size()-1; i++){ // last element ko nahi traverse karenge as nums[i+1] overflow kar jaga..
            if(nums[i] == nums[i+1]){ // if any element repeats true
                return true;
            }
        }
        return false;     // agar koi nahi repeat kiya .. false  
    }
};