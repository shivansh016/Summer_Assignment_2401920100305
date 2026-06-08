#include<bits/stdc++.h>
using namespace std;


//t.c=> O(n)
//s.c=> O(N) (not good using the map as maps use the hashing so more memory inisde the heap)

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }

        for(int i=0; i<s.size(); i++){
            if(mp[s[i]] == 1){
                return i;
            }
        }

        return -1;
    }
};

//Optimization

//t.c. => O(n)
//s.c. => O(1) 

class Solution {
public:
    int firstUniqChar(string s) {

        vector<int> count(26,0);

        for(int i=0; i<s.size(); i++){
            count[s[i]- 'a']++;
        }

        for(int i=0; i<s.size(); i++){
            if(count[s[i]- 'a'] == 1){
                return i;
            }
        }

        return -1;
    }
};