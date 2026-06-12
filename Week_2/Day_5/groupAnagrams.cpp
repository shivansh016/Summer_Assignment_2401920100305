#include<bits/stdc++.h>
using namespace std;
//brute force
//this approach is correct but has very high t.c. ... need to be done using hash maps...

class Solution {
public:
    bool isAnagram(string &s1, string &s2){
        if(s1.size() != s2.size()){
            return false;
        }
        int count[26] = {0}; // created a freq. arr for each of the 26 chars. initializing all by zero
        for(int i=0; i<s1.size(); i++){
            int idx = s1[i] - 'a';
            count[idx]++;
        }

        for(int i=0; i<s2.size(); i++){
            if(count[s2[i] - 'a'] == 0){ // agar koi char jo s2 me already hai ... and for that count has 0 value at its idx.. means extra char hai vo s2 me --> return false...
                // cout << "not valid anagram\n";
                return false;
            }
            count[s2[i] - 'a']--;
        }

        return true;

    }

    bool isPresent(vector<vector<string>> &a, string &s){
        for(int i = 0; i<a.size(); i++){
            for(int j=0;  j<a[i].size(); j++){
                if(a[i][j] == s){
                    return true;
                }
            }
        }
        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        for(int i=0; i<strs.size(); i++){
            string s1 = strs[i];
            if(!isPresent(ans, s1)){
                vector<string> a;
                a.push_back(s1);
                for(int j =i+1; j<strs.size(); j++){
                 string s2 = strs[j];
                 if(isAnagram(s1, s2)){
                    a.push_back(s2 );
                 }
                }
                ans.push_back(a);
            }
        }
        return ans;
    }
};