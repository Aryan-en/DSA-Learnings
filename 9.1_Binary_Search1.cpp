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
// Basic Binary Search ->
// int search(vector<int>& nums, int target) {
//     int low = 0, high = nums.size()-1;
//     while (low <= high)
//     {
//         int mid = (low+high)/2;
//         if(nums[mid] == target){return mid;}
//         else if(target > nums[mid]){
//             low = mid+1;
//         }
//         else{
//             high = mid-1;
//         }
//     }
//     return -1;
// }
// Lower Bound -> smallest index such that arr[index] > = x
// int Lb(vector<int> &arr,int x){
//    int low = 0, high = arr.size()-1; 
//    while (low>=high)
//    {
//         int mid = (low+high)/2;
//         if (arr[mid] >= x)
//         {
//             return mid;
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//    }
//    return arr.size();
// }

// Upper Bound -> smallest index such that arr[index] > x
// int Ub(vector<int> &arr,int x){
//    int low = 0, high = arr.size()-1; 
//    while (low>=high)
//    {
//         int mid = (low+high)/2;
//         if (arr[mid] > x)
//         {
//             return mid;
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//    }
//    return arr.size();
// }
// int Lb(vector<int> &arr,int x){
//     int n = arr.size();
//    int low = 0, high = n-1; 
//    int ans = n;
//    while (low>=high)
//    {
//         int mid = (low+high)/2;
//         if (arr[mid] >= x)
//         {
//             ans = mid;
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//    }
//    return ans;
// }
// int Ub(vector<int> &arr,int x){
//     int n = arr.size();
//    int low = 0, high = n-1; 
//    int ans = n;
//    while (low>=high)
//    {
//         int mid = (low+high)/2;
//         if (arr[mid] > x)
//         {
//             ans = mid;
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//    }
//    return ans;
// }
// vector<int> searchRange(vector<int>& nums, int target) {
//     int LowerBound = Lb(nums, target);
//    if(LowerBound == nums.size() || nums[LowerBound] != target){
//     return {-1,-1};
//    }
//    return {LowerBound, Ub(nums, target) -1};
// }
// int singleNonDuplicate(vector<int>& nums) {
//             int n = nums.size();
//         if(n == 1) return nums[0];
//         int st = 0, end = n - 1;
//         while(st <= end){
//             int mid = (st + end)/2;
//             if(mid == 0 && nums[0] != nums[1]) return nums[mid];
//             if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];
//             if((nums[mid - 1] != nums[mid]) && nums[mid] != nums[mid+1]) return nums[mid];
//             if(mid % 2 == 0){
//                 if(nums[mid - 1] == nums[mid]){
//                    end = mid - 1;
//                 }else{
//                     st = mid + 1;
//                 }
//             }else{
//                 if(nums[mid - 1] == nums[mid]){
//                     st = mid + 1;
//                 }else{
//                     end = mid - 1;
//                 }
//             }
//         }
//         return -1;
// }
int main() {
// vector <int> nums = {1,1,2,3,3,4,4,8,8};
// cout << singleNonDuplicate(nums);
return 0;
}