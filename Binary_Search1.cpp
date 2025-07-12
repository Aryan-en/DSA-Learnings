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
// int Lb(vector<int> &arr,int x){
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
void searchRange(vector<int>& nums, int target) {
    vector <int> range;
    int counter = 0, i =0;
    int first = -1, last = -1;
    while (i < nums.size())
    {
        
    }
    
}
int main() {
vector <int> nums = {5,7,7,8,8,10};
searchRange(nums,8);
return 0;
}