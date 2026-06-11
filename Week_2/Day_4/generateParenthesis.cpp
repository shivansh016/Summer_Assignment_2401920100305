#include<bits/stdc++.h>
using namespace std;

//TC=O(4^N/root(N))
//SC=O(N)
class Solution {
public:
    void rec(int open, int close, int n, string& s, vector<string>& ans) {
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }
        if (open < n) {
            s.push_back('(');
            rec(open + 1, close, n, s, ans);
            s.pop_back();
        }
        if (close < open) {
            s.push_back(')');
            rec(open, close + 1, n, s, ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        rec(0, 0, n, s, ans);
        return ans;
    }
};
