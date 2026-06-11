#include<bits/stdc++.h>
using namespace std;
//TC=O(N)
//SC=O(1)
class Solution {
public:
void reverse(string& s,int r,int t){
    while(r<t){
        swap(s[r],s[t]);
        r++;
        t--;
    }
}
    string reverseWords(string s) {
        int i=0;
        int j=0;
        while(j<=s.length()){
            if(s[j]==' '||j==s.length()){
                reverse(s,i,j-1);
                i=j+1;
            }
            j++;
        }
        return s;
    }
};
