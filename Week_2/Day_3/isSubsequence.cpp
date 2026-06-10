#include<bits/stdc++.h>
using namespace std;

//t.c. O(n)
//s.c. O(1)

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int sPtr = 0;
        int tPtr = 0;

        while(sPtr <s.size() && tPtr < t.size()){
            if(s[sPtr] == t[tPtr]){
                sPtr++;
                tPtr++;
            }else{
                tPtr++;
            }
        }

        return sPtr == s.size();
    }
};