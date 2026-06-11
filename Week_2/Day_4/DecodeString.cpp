#include<bits/stdc++.h>
using namespace std;
//TC=O(Output len)
//SC=O(Output len)
class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(char c : s){
            if(c!=']'){
                st.push(c);
            } else{
                string curr_str="";
                while(!st.empty()&&st.top()!='['){
                    curr_str=st.top()+curr_str;
                    st.pop();
                }
                st.pop();
                string num_str="";
                while(!st.empty()&&isdigit(st.top())){
                    num_str=st.top()+num_str;
                    st.pop();
                }
                int k=stoi(num_str);
                while(k--){
                    for(char ch : curr_str){
                        st.push(ch);
                    }
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};
