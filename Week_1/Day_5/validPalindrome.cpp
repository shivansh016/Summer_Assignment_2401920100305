#include<bits/stdc++.h>
using namespace std;
//brute force...
class Solution {
public:

    bool helper(int i, string &s, int n){ // & since we want to stop the duplicary of string and save time
        if(i>=n){
            return true;
        }

        if(s[i] != s[n-1]){
            return false;
        }else{
            return helper(i+1, s, n-1);
        }
    }


    bool isPalindrome(string s) {
        //converting all the uppercase letters to lowercase;
        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'A' && s[i]<= 'Z'){
                s[i] = s[i] + 32;
            }
        }

        // removing the non-alphanumeric chars..
        for(int i=0; i<s.size(); i++ ){
            if(s[i] >= 'a' && s[i] <= 'z'){
                continue;
            }else if(s[i] >= '0' && s[i] <= '9'){
                continue;
            }else{
                s.erase(i, 1);
                i--; // as after the removal the elements in the array shift to left so we need to take our i one step back.
            }
        }

        return helper(0, s, s.size());
    }
};