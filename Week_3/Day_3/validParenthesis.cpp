#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isValid(string str){
    stack<char> s;

    for (int i =0; i<str.size(); i++){
        char ch = str[i];

        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{ // closing bracket
            if(s.empty()){ // when more no. of opening brackets.
                return false;
            }
            char top = s.top();
            if(top == '[' && ch == ']' ||
               top == '(' && ch == ')' ||
                top == '{' && ch == '}'){
                    s.pop();

                }

            else{
                return false; // when doesn't matches.
            }
        }
    }

    return s.empty();
}


};