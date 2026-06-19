#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    void helperShiftStacks(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
    }
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        helperShiftStacks();
        int front = s2.top();
        s2.pop();

        return front;
    }
    
    int peek() {
        helperShiftStacks();
        
        return s2.top();
    }
    
    bool empty() {
        return s2.empty() && s1.empty();
    }
};