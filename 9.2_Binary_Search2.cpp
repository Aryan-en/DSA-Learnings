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

// Very important (good Q) Binary search - 2 in sorted and rotated aray
// bool search(vector<int>& nums, int target) {
//  int n = nums.size();
//  int low = 0, high = n-1;
//  while (low <= high)
//  {
//     int mid = (low+high)/2;
//     if(nums[mid] == target){return true;}
//     if(nums[low] == nums[mid] && nums[mid] == nums[high]){
//         low++;
//         high--;
//         continue;
//     }
//     if(nums[low] <= nums[mid]){
//         if (nums[low] <= target && target <= nums[mid])
//         {
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     else{
//         if(nums[mid] <= target && target <= nums[high]){
//             low = mid+1;
//         }
//         else{
//             high = mid-1;
//         }
//     }
//  }
//     return false;   
// }
// int myAtoi(string s) {
// int n = s.length();
// int tens = pow(10,n-1);
// int ans = 0, minus = 1;
// if(s[0] == '-'){
//     minus = -1;
//     s[0] = ' ';
// }
// for (int i = 0; i < n; i++)
// {   
//     if(s[i] != ' '){
//     if ((static_cast<int>(s[i])-48) >= 0 && (static_cast<int>(s[i])-48) <= 9)
//     {
//     int num = s[i];
//     ans += (num-48)*tens;
//     tens /= 10;
//     }
//     else{
//         return ans;
//     }
//     }
    
// }
// ans = ans*minus;
// return ans;
// }
// int findMin(vector<int>& nums) {
//     int n = nums.size();
//     int low = 0, high = n-1;
//     int ans = INT_MAX;
//     while (low<= high)
//     {
//         int mid = (low+high)/2;
//         if(nums[low] <= nums[mid]){
//             ans = min(ans, nums[low]);
//             low = mid+1;
//         }
//         else{
//             ans = min(ans, nums[mid]);
//             high = mid-1;
//         }
//     }
//     return ans;
// }
// Index of minimum number is the number of rotation
// int findnumRotations(vector<int>& nums){
//      int n = nums.size();
//     int low = 0, high = n-1, index;
//     int ans = INT_MAX;
//     while (low<= high)
//     {
//         int mid = (low+high)/2;
//         if(nums[low] <= nums[high]){
           
//            if(nums[low] < ans) { index = low;
//             ans = nums[low];}
//            break;
//         }
//         if(nums[low] <= nums[mid]){
           
//            if(nums[low] < ans) {
//              index = low;
//             ans = nums[low];
//         }
//         low = mid+1;
//         }
         
//         else{
//            high = mid-1;
//            if (nums[mid] < ans)
//            {
//                 index = mid;
//                 ans = nums[mid];
//            }
           
//         }
//     }
//     return index;   
// }
// int findPeakElement(vector<int>& nums) {
//     int n = nums.size();
//     int low = 0, high = n-1;
//     int ans;
//     if (n == 1) return 0;
//     while (low <= high)
//     {
//         int mid = (low+high)/2;
//         if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
//             return mid;
//         }
//         else if(nums[mid] > nums[mid-1]){
//             low = mid+1;
//         }
//         else {
//             high = mid-1;
//         }
//     }
//     return -1;
// }
bool isPalindrome(string s) {
if(s == " "){
    return true;
}
transform(s.begin(), s.end(), s.begin(), ::tolower);
int n = s.length();
string NewStr = "";
for (int i = 0; i < n; i++)
{
    if(static_cast<int>(s[i]) >= 97 && static_cast<int>(s[i]) <= 122){
        NewStr += s[i];
    }
    else if(static_cast<int>(s[i]) >= 48 && static_cast<int>(s[i]) <= 57){
        NewStr += s[i];
    }
}
string newstr2 = NewStr;
reverse(NewStr.begin(), NewStr.end());
bool ans = (NewStr == newstr2);
return ans;
}
int main() {
string s = "0P";
cout << isPalindrome(s);
return 0;
}