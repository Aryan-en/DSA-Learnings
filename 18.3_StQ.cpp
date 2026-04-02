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
int largestRectangleArea(vector<int>& heights) {
    stack <int> st;
    //Horizontal
    int minElem = INT_MAX;
    for(auto itr : heights) {
        minElem = min(minElem, itr);
    }
    cout << "minElem: " << minElem << endl;
    int horzmax = minElem * heights.size();
    //vertical
    int maxVertArea = 0;
    for(int i = 0; i < heights.size(); i++) {
        while(!st.empty() && heights[st.top()] > heights[i]) {
            int height = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxVertArea = max(maxVertArea, height * width);
        }
        st.push(i);
    }
    while(!st.empty()) {
        int height = heights[st.top()];
        st.pop();
        int width = st.empty() ? heights.size() : heights.size() - st.top() - 1;
        maxVertArea = max(maxVertArea, height * width);
    }
    cout << "horzmax: " << horzmax << endl;
    cout << "maxVertArea: " << maxVertArea << endl;
    return max(horzmax, maxVertArea);
}
int maximalRectangle(vector<vector<char>>& matrix) {
    int maxArea = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        
    }
    
}
int main() {
vector<vector<char>> matrix = {
    {'1', '0', '1', '0', '0'},
    {'1', '0', '1', '1', '1'},
    {'1', '1', '1', '1', '1'},
    {'1', '0', '0', '1', '0'}
};
cout << "largest rectangle area: " << largestRectangleArea({2,1,5,6,2,3}) << endl;
return 0;
}