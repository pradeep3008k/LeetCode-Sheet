/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int>>st;
    MinStack() {
        this->st=st;
    }
    
    void push(int val) {
        if((this->st).empty()){
            this->st.push({val,val});
        }
        else{
            int prev_min=this->st.top().second;
            this->st.push({val,min(val,prev_min)});
        }
    }
    
    void pop() {
        this->st.pop();
    }
    
    int top() {
        return this->st.top().first;
    }
    
    int getMin() {
        return this->st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

