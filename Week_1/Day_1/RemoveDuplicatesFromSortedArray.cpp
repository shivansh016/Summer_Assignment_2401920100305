//Brute force 
//using set (Onlogn) .. since insert in set requires O(logn)
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // brute force approach
        set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]); // note that sets have unique elements so only the unique elements get inserted and t.c. is NlogN
        }

        int index = 0;
        for(auto it: st){ // we traverse the elements in the set and replace the values in the nums vector... at the end return the index.. as is asked in the question.
            nums[index] = it;
            index ++;
        }

        return index;
    }
};


// optimized using two pointer..

//approach - first element is always unique so we take a pointer i at 0
//another pointer j from 1 till end 
//move j till we get an element which is not same as the ith position element then we replace that element at i+1 position and update i
// at the end return i+1.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j=1; j<nums.size(); j++){
            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
       
        return i + 1; // here we had to return the number of unique elements in the nums... that's why we are returning i+1..
        // t.c. O(n)
        //s.c. O(1)
    }
};