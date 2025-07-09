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
// bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         vector<int> arr;
//         bool a = false;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i+1; j < nums.size(); j++)
//             {
//                 if(nums[i] == nums[j]){
//                     arr.emplace_back(j-i);
//                 }
//             }
//         }
//         for(auto itr : arr){
//             if(itr <= k){
//                 a = true;
//             }
//         }
//         return a;
// }
// void rotate(vector<vector<int>> &matrix){
//     vector<vector<int>> rotated;
//     int row = matrix.size();

//         for (int i = 0; i < row; i++) {
//             for (int j = i + 1; j < row; j++) {
//                 swap(matrix[j][i], matrix[i][j]);
//             }
//         }
//         for (int i = 0; i < row; i++) {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//         // transpose and reverse
    
    
// }
// void spiralOrder(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     int left = 0, right = m-1, top = 0, bottom = n-1;
//     vector <int> ans;
//     // right
//   while (top<= bottom && left <= right)
//   {
//       for (int i = left; i <= right; i++)
//     {
//         ans.emplace_back(matrix[top][i]);
//     }
//     top++;
//     for (int i = top; i <= bottom; i++)
//     {
//         ans.emplace_back(matrix[i][right]);
//     }
//     right--;
//     if(top <= bottom){
//     for (int i = right; i <= left; i--)
//     {
//         ans.emplace_back(matrix[bottom][i]);
//     }
//     bottom--;
// }
// if(left <= right){
//     for (int i = bottom; i >= top; i--)
//     {
//         ans.emplace_back(matrix[i][left]);
//     }
//     left++;
//   }
// }  
// 
// int factorial(int num){
    
//     int a = 1; 
//     if(num == 0){
//         a = 1;
//     }
//     else{
//     for (int i = 1; i <= num; i++)
//     {
//         a *= i;
//     }
//     }
//     return a;
// }
// int ncr(int n, int r){
//     int a = (factorial(n))/((factorial(n-r))*(factorial(r)));
//     return a;
// }
// vector<int> rowgenerator(int numRows){
//     vector<int> Row;
//     for (int c = 1; c <= numRows; c++)
//     {
//         Row.emplace_back(ncr(numRows-1, c-1));
//     }
//     return Row;
// }
// void generate(int numRows) {
//     vector<vector<int>> pascal;
//     for (int r = 1; r <= numRows; r++)
//     {
//         pascal.emplace_back(rowgenerator(r));
//     }
        
// }
// void majorityElement(vector<int>& nums) {
//     vector <int> ans;
//     int n = nums.size();
//     map <int, int> hash;
//     for (int i = 0; i < n; i++)
//     {
//         hash[nums[i]]++;
//     }
//     for(auto itr : hash){
//         if(itr.second > n/3){
//             ans.emplace_back(itr.first);
//         }
//     }
// }
// void threeSum(vector<int>& nums) {
//     int n = nums.size();
//     set<vector<int>> st;
//         for (int i = 0; i < n; i++)
//         {
//             set <int> hashset;
//             for (int j = 0; j < n; j++)
//             {
//                 int third = -(nums[i]+nums[j]);
//                 if (hashset.find(third) != hashset.end())
//                 {
//                     vector<int> temp = {nums[i], nums[j], third};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(nums[j]);
//             }
            
//         }
//         vector<vector<int>> ans(st.begin(), st.end());
        
// }
void fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector <vector<int>> ans;
        int i=0, j=i+1, k, l;
        vector <int> temp;
        for (int i = 0; i < n; i++)
        {
            if(i> 0 && nums[i] == nums[i-1]){
                continue;
            }
            for (int j = i+1; j < n; j++)
            {
                k = j+1; 
                l = n-1;
                long long sum = nums[i]+nums[j]+nums[k]+nums[l];
                while (k<l)
                {
                    if(sum<target){
                        k++;
                    }
                    
                   else if(sum >target){
                    l--;
                   }
                    else{
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++; 
                        l--;
                        while (k<l && nums[k] == nums[k-1])
                        {
                            k++;
                        }
                        
                    }
                }
                j++;
                while (j < n && nums[j] == nums[j-1])
                {
                    j++;
                }
                
            }
            
        }
        
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
}
int main() {
vector <int> nums = {1,0,-1,0,-2,2};
fourSum(nums, 0);
return 0;
}