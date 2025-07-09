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
using namespace std;
// void rotate(vector<vector<int>>& matrix) {
//         int rows = matrix.size();
//         int columns = matrix[0].size();
//         vector<vector<int>> rotated;

// }
// int thirdMax(vector<int>& nums) {
//         set<int> st;
//         vector<int> arr;
//         int n;
//         for(auto itr : nums){
//             st.insert(itr);
//         }
//         for(auto str : st){
//             arr.emplace_back(str);
//         }
//         if(st.size()== 2){
//             n = arr[1];
//         }
//         else{
//             n = arr[2];
//         }
//         return n;
// }
// void intersect(vector<int>& nums1, vector<int>& nums2) {
// //                     sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
        
//         int i = 0, j = 0;
//         vector<int> result;
        
//         while (i < nums1.size() && j < nums2.size()) {
//             if (nums1[i] < nums2[j]) {
//                 i++;
//             } else if (nums1[i] > nums2[j]) {
//                 j++;
//             } else {
//                 result.push_back(nums1[i]);
//                 i++;
//                 j++;
//             }
//         }
        
//         return result;

// }
// void findLucky(vector<int>& arr) {
//     map <int, int> hash;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         hash[arr[i]]++;
//     }
//     int n;
//     for(auto itr : hash){
//         if(itr.first == itr.second){
//             n = itr.first;
//         }
//     }
//     cout << n;
// }
void topKFrequent(vector<int>& nums, int k) {
    map <int, int> hash;
    for (int i = 0; i < nums.size(); i++)
    {
        hash[nums[i]]++;
    }
    int i = 0, largest = nums[i];
    for(auto itr : hash){
        cout << i << ") " << itr.first << "->" << itr.second <<endl;
        if(itr.second){

        }
    }

}
int main() {
// vector <vector<int>> matrix = {{1,2,3},
//                                {4,5,6},
//                                {7,8,9}};
vector<int> arr = {1,1,1,2,2,3};
topKFrequent(arr, 2);
return 0;
}