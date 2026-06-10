#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {

//t.c. => O(n)
//s.c. => O(n)
//explanation : double the string , then remove the first and last char in the doubled string, then try to find the s in the doubled string.. if you get it return true.. otherwise false.
        string doubled = s+s;

        string substr = doubled.substr(1, doubled.length()-2); //remove the first and last char...

        if(substr.find(s) != string :: npos){
            return true;
        }else{
            return false;
        }
    }
};
