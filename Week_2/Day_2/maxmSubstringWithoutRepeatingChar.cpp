#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//Brute force 
//O(N^2), O(256)


        // int maxLen = 0;
        // for(int i=0; i<s.size(); i++){
        //     unordered_map<char,int> mp;
        //     int len = 0;
        //     for(int j=i; j<s.size(); j++){
        //         if(mp.count(s[j]) == 1){
        //             break;
        //         }
        //         len = j-i+1; 
        //         maxLen = max(len, maxLen);
        //         mp[s[j]]++;
        //     }
        // }
        // return maxLen;

//sliding window
//O(n), O(1)/256

        int l = 0;
        int maxLen = 0;
        unordered_map<char,int> mp;
        for(int r = 0; r< s.size(); r++){
            while(mp.count(s[r]) ==1 && l<s.size()){
                mp.erase(s[l]);
                l++;
            }
            int len = r-l+1;
            mp[s[r]]++;
            maxLen = max(maxLen, len);
        }

        return maxLen;
     }
};
