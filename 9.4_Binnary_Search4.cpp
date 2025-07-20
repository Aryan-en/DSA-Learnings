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
// int arrangeCoins(int n) {
// vector <int> staircase;
// for (int i = 1; i <= n; i++)
// {
//     staircase.emplace_back(i);
//     n = n-i;
// }
// return staircase.size();
// }
// void removeDuplicates(vector<int>& nums) {
//     map <int, int> hash;
//     vector<int> ansarr;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         hash[nums[i]]++;
//     }
//     for(auto itr : hash){
//         if(itr.second > 2){
//             for (int i = 0; i < 2; i++)
//             {
//                 ansarr.emplace_back(itr.first);
//             }  
//         }
//         else{
//             for (int i = 0; i < itr.second; i++)
//             {
//                 ansarr.emplace_back(itr.first);
//             }
            
//         }
//     }
// int ans = ansarr.size();
// nums.clear();
// for(auto itr: ansarr){
//     nums.emplace_back(itr);
// }
// for(auto itr: nums){
//     cout << itr << " ";
// }
// }
// int findDuplicate(vector<int>& nums) {
//     map<int, int> hash;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         hash[nums[i]]++;
//     }
//     int ans;
//     for(auto itr : hash){
//         if(itr.second > 1){
//             ans = itr.first;
//         }
//     }
//     return ans;
// }
// void largestOddNumber(string num) {
//     string ans = "";
//     int n = stoi(num);
//     if(n%2 != 0){
//         ans += num;
//     }   
//     else{
//     int largest = INT_MIN;
//     for (int i = 0; i < num.length(); i++)
//     {
//         int m = static_cast<int>(num[i]);
//         if (m>largest)
//         {
//             largest = m;
//         }
//     }
    
//     }

//     cout << ans;  
// }
// bool checkPrime(int num){
//     int factors = 0;
//     bool ans;
//     for (int i = 1; i <= num; i++)
//     {
//         if (num%i == 0)
//         {
//             factors++;
//         }
//     }
//     (factors == 2) ? ans = true : ans = false;
//     return ans;
// }
// int countPrimes(int n) {
//     if(n <= 1){
//         return 0;
//     }
//     int count = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (checkPrime(i) == true)
//         {
//             count++;
//         }
        
//     }
//     return count;
// }
// class Solution {
// public:
//     int countPrimes(int n) {
        
//         int cnt = 0;
//         vector<bool> prime(n+1, true);

//         prime[0] = prime[1] = false;

//         for(int i=2; i<n; i++) {
//             if(prime[i]) {
//                 cnt++;
//                 for(int j=2*i; j<n; j=j+i) {
//                     prime[j] = 0;
//                 }
//             }
//         }
//         return cnt;
//     }
// };
int Splitter(vector<int> &nums, int k){
    int ind = 1;
    long long elems = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (elems + nums[i] <= k)
        {
            elems = nums[i];
        }
        else{
            ind++;
            elems += nums[i];
        }
    }
    return ind;
    
}
int splitArray(vector<int>& nums, int k) {
    vector<int> maxsplit;
    int n = nums.size();
    if(k>n) return -1;
    int low = *max_element(nums.begin(), nums.end());
    int high = 0;
    for(auto i : nums){
        high+= i;
    }
    int mid;
    while (low <=high)
    {
        mid = (low+high)/2;
        int m = Splitter(nums, mid);
        if (m > k)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}
int main() {
vector<int> nums = {7,2,5,10,8};
int k = 2;  
cout << splitArray(nums, k);
return 0;
}