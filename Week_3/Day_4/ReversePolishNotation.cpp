#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(const string& token : tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                long long num2=st.top(); 
                st.pop();
                long long num1=st.top(); 
                st.pop();
                long long res=0;
                
                if(token=="+") 
                    res=num1+num2;
                else if(token=="-") 
                    res=num1-num2;
                else if(token=="*") 
                    res=num1*num2;
                else if(token=="/") 
                    res=num1/num2;


                st.push(res);
            } else{
                st.push(stoll(token));
            }
        }
        return st.top();
    }
};
//TC=O(N)
//SC=O(N)