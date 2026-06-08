#include<bits/stdc++.h>
using namespace std;


//t.c. => O(n + N)
//s.c. => O(larger(n,N)) 
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ransom;
        unordered_map<char,int> mag;

        for(int i=0; i<ransomNote.size(); i++){
            ransom[ransomNote[i]]++;
        }

        for(int i=0; i<magazine.size(); i++){
            mag[magazine[i]]++;
        }

        for(pair<char,int> p : ransom){
            if(ransom[p.first] > mag[p.first]){
                return false;
            }
        }

        return true;
    }
};

//optimization, using fixed size array

//O(n + N), O(1)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size()){
            return false;
        }

        vector<int> count(26,0);

        for(int i=0; i<magazine.size(); i++){
            count[magazine[i] - 'a']++;
        }

        for(int i=0; i<ransomNote.size(); i++){
            if(count[ransomNote[i]-'a'] == 0){
                return false;
            }
            count[ransomNote[i]-'a']--;
        }
        return true;
       
    }
};


