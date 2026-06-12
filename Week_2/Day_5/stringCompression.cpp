#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
    //t.c. =O(N)
    //s.c. =O(1)

  //  approach -> take two pointers i, j and use j to traverse the whole chars , and i to traverse updated length.

        int i=0;
        int j=0;
        int n = chars.size();

        while(j<n){
            char cur_char = chars[j];
            int cnt =0;
            while(j<n && chars[j] == cur_char){
                cnt ++;
                j++;
            }
            chars[i] = cur_char;
            i++;

            if(cnt > 1){
                string cnt_str = to_string(cnt);
                for(char ch : cnt_str){
                    chars[i] = ch;
                    i++;
                }
            }
        }

        return i;
    }
};