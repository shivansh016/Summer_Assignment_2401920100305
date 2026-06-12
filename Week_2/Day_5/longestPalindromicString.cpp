#include<bits/stdc++.h>
using namespace std;

//O(n)
//O(1)
class Solution {
public:
    int expandFromCenter(string &s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
    string longestPalindrome(string s) {
        if (s.empty()) {
            return "";
        }
        
        int start = 0, maxi = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int len1 = expandFromCenter(s, i, i);
            int len2 = expandFromCenter(s, i, i + 1);
            int curr_len = max(len1, len2);
            if (curr_len > maxi) {
                maxi = curr_len;
                start = i - (curr_len - 1) / 2;
            }
        }
        return s.substr(start, maxi);
    }
};