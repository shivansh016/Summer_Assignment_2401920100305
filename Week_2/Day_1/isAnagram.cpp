#include<bits/stdc++.h>
using namespace std;


//t.c. _> O(n)
//s.c. _> O(N) {N= number of distinct characters}
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> mp;

        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }

        for(int j=0; j<t.size(); j++){
            if(mp.count(t[j]) == 0){
                return false;
            }else {
                mp[t[j]]--;
            }
        }

        return true;
    }
};

//t.c => O(n)
//s.c => O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(26,0);
        if(s.size() != t.size()){
            return false;
        }

        for(int i=0; i<s.size(); i++){
            arr[s[i]-'a']++;
        }

        for(int j=0; j<t.size(); j++){
            if(arr[t[j] - 'a'] == 0){
                return false;
            }
            arr[t[j]-'a']--;
        }

        return true;
    }
};