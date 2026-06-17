#include<bits/stdc++.h>
using namespace std;

class MinStack {
    
public:
    stack<pair<int, int>> st;
    // pair.first = actual value, pair.second = minimum value at this state
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(make_pair(val, val));
        }else{
            int curr_min = st.top().second;
            st.push(make_pair(val, min(val, curr_min)));
        }
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
        }
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};