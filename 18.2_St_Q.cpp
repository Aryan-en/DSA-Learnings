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
// int trap(vector<int>& height) {
//     int n = height.size();
//     vector <int> lmax(n,0);
//     vector <int> rmax(n,0);
//     int total = 0;
//     lmax[0] = height[0];
//     rmax[n-1] = height[n-1];
//     for (int i = 1; i < n; i++)
//     {
//         lmax[i] =  max(lmax[i-1], height[i]);
//     }
//     for (int i = n-2; i >= 0; i--)
//     {
//         rmax[i] =  max(rmax[i+1], height[i]); 
//     }
//     for (int i = 0; i < n; i++)
//     {
//         total += min(lmax[i], rmax[i]) - height[i];
//     }
//     return total;
// }
// int sumSubarrayMins(vector<int>& arr) {
//     int n = arr.size();
//     vector <vector<int>> Farr;
//     for (int i = 0; i < n; i++)
//     {
//         vector <int> subarr;
//         for (int j = i; j < n; j++)
//         {
//             subarr.emplace_back(arr[j]);
//             Farr.emplace_back(subarr);
//         }
//     }
//     
//     int total = 0;
//     for (int i = 0; i < Farr.size(); i++)
//     {
//         // auto m = min(Farr[i].begin(), Farr[i].end());
//         // total += *m;
//         for (int j = 0; j < Farr[i].size(); j++)
//         {
//             auto m = (min_element(Farr[i].begin(), Farr[i].end()));
//             int num = *m;
//             total += num;
//         }
//         
//     }
//     return total;
// }
bool signDetector(int num) {
    if (num < 0)
        return false;
    return true;
}
void asteroidCollision(vector<int>& asteroids) {
    stack <int> st;
    int n = asteroids.size();
    for (int i = 0; i < n; i++){
       if(asteroids[i] > 0) {
           st.push(asteroids[i]);
       }
       else {
           while (!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i]))
           {
               st.pop();
           }
           if (!st.empty() && st.top() == abs(asteroids[i])) {
               st.pop();
           }
           else if (st.empty() || st.top() < 0) {
               st.push(asteroids[i]);
           }
       }
    }
    vector <int> ans(st.size(),0);
    while(!st.empty()) {
        ans[st.size()-1] = st.top();
        st.pop();
    }
    for(auto itr : ans){
        cout << itr << " ";
    }
}   
int main() {
vector<int> arr = {3,5,-6,2,-1,4};
asteroidCollision(arr);
return 0;
}