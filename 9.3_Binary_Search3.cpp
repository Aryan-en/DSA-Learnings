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
// void processStr(string s, int k) {
// int n = s.length();
// string result = "";
// for (int i = 0; i < n; i++)
// {
//     if(s[i] == '*'){
//         result.erase(result.length()-1, 1);
//     }
//     if(s[i] == '#'){
//         result = result+result;
//     }
//     if(s[i] == '%'){
//         reverse(result.begin(), result.end());
//     }
//     if(s[i] != '*' && s[i] != '#' && s[i] != '%'){
//         result += s[i];
//     }
// }
// }
// Brute force for KOKO banana
// int tottalhrs(vector<int>& piles, double rate){
// int totaltime = 0;
//     for (int i = 0; i < piles.size(); i++){
//     double val = static_cast<double>(piles[i])/(rate);
//     totaltime += ceil(val);
//     } 
//     return totaltime;
// }
// int minEatingSpeed(vector<int>& piles, int h) {
// int max = INT_MIN;
// for (auto itr : piles){
//     if (itr > max)
//     {
//         max = itr;
//     }  
// }
// for (int rate = 1; rate <= max; rate++)
// {
//     int reqtime = tottalhrs(piles, rate);
//     if (reqtime <= h)
//     {
//         return rate;
//     }
    
// }
// return -1;
// }
// float adder(vector<int>& nums, int divisor){
// float sum = 0;
// for (int i = 0; i < nums.size(); i++)
// {
//     sum+= ceil((static_cast<float>(nums[i])/divisor));
// }
// return sum;
// }
// int smallestDivisor(vector<int>& nums, int threshold) {
//     int low = 1, high = INT_MIN;
//     for(auto itr : nums){
//         if(itr > high){
//             high = itr;
//         }
//     }
//     while (low <= high)
//     {
//         int mid = (low+high)/2;
//         if (adder(nums, mid) >= threshold)
//         {
//                 high = mid-1;
//         }
//         else{
//             low = mid+1;
//         } 
//     }
//     return low;

// }
// void findKthPositive(vector<int>& arr, int k) {
// int maxi = arr[arr.size()-1];
// vector<int> missing;
// for (int i = 1; i <= maxi+k; i++)
// {
//     missing.emplace_back(i);   
// }
// }
bool exist(vector<int>& arr, int target){
    bool res;
    int cnt = count(arr.begin(), arr.end(), target);
    (cnt>0) ? res = true : res = false;
    return res;
}
void findKthPositive(vector<int>& arr, int k) {
int n = arr.size();
int maxm = arr[n-1];
vector<int> missing;
//  accumulate(arr.begin(), arr.end(), 0);
for (int i = 1; i <= maxm+k; i++)
{
    missing.emplace_back(i);
}
for (int i = 0; i < missing.size(); i++)
{
    if (exist(arr, missing[i]) == 1)
    {
        missing.erase(missing.begin()+(i));
        i = 0;
    }
    
}
// for(auto itr : missing){
//     cout << itr << " ";
// }
cout << missing[k+1];
}
int main() {
vector <int> nums = {2,3,4,7,11};
findKthPositive(nums, 5);
return 0;
}