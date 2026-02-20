#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <list>
#include <map>
#include <string>
#include <functional>
#include <stack>
#include <set>
#include <queue>
using namespace std;
// Stack: LIFO
// Queue: FIFO 
class MinStack {
public:
    stack <pair<int, int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()) {
            st.push({val, val});
        } else {
            st.push({val, min(val, st.top().second)});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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
void nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    stack<int> st;
    for(int i = nums2.size() - 1; i >= 0; i--) {
        while(!st.empty() && st.top() <= nums2[i]) {
            st.pop();
        }
        if(st.empty()) {
            res.push_back(-1);
        } else {
            res.push_back(st.top());
        }
        st.push(nums2[i]);
    }  
    for(auto x : res) {
        cout << x << " ";
    }
}
int main() {
vector nums1 = {4,1,2};
vector nums2 = {1,3,4,2};
nextGreaterElement(nums1, nums2);
return 0;
}