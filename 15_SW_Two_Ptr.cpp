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
// int maxScore(vector<int>& cardPoints, int k) {
//     int lsum = 0, rsum = 0, maxSum = 0;
//     for (int i = 0; i < k; i++)
//     {
//         lsum += cardPoints[i];
//     }
//     maxSum = lsum;
//     int n = cardPoints.size();
//     while (lsum > 0)
//     {
//         int temp = 0;
//         lsum = lsum - cardPoints[k-1];
//         rsum = rsum + cardPoints[n-1];
//         temp = lsum + rsum;
//         // cout << "lsum = " << lsum << endl << "rsum = " << rsum << endl << "temp = " << temp << endl;
//         if(temp > maxSum){
//             maxSum = temp;
//         }
//         k--;
//         n--;
//     } 
//     return maxSum;
// }
// int lengthOfLongestSubstring(string s) {
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int left = 0;
//         int maxLength = 0;
//         unordered_set<char> charSet;
// 
//         for (int right = 0; right < s.length(); right++) {
//             while (charSet.find(s[right]) != charSet.end()) {
//                 charSet.erase(s[left]);
//                 left++;
//             }
// 
//             charSet.insert(s[right]);
//             maxLength = max(maxLength, right - left + 1);
//         }
// 
//         return maxLength;        
//     }
// };
// }
    // int longestOnes(vector<int>& nums, int k) {
    //     int i=0,j=0;
    //     while(j<nums.size()){
    //         if(nums[j++]==0){
    //             k--;
    //         }
    //         if(k<0){
    //             if(nums[i++]==0){
    //                 k++;
    //             }
    //         }
    //     }
    //     return j-i;
    // }
// int characterReplacement(string s, int k) {
//     int l = 0, r = 0, maxlen = 0;
//     map<char, int> hash;
//     while (r < s.length())
//     {
//         hash[r]++;
//         while (mpp.size()> k)
//         {
//             hash[s[r]]--;
//             if(hash[s[l]] == 0)
//         }
//         
//     }
//     
//     return maxlen;
// }

//Brute:
// bool check(string str){
//     map <char, int> hash;
//     bool ans = false;
//     for (int i = 0; i < str.length(); i++)
//     {
//         hash[str[i]]++;
//     }
//     if(hash.size() == 3){
//         ans = true;
//     }
//     return ans;
// }
// void numberOfSubstrings(string s) {
//     int substrs = 0;
//     vector <string> subsrs;
//     for (int i = 0; i < s.length(); i++)
//     {
//         string temp = "";
//         for (int j = i; j < s.length(); j++)
//         {
//             temp += s[j];
//             subsrs.emplace_back(temp);
//         }
//     }
//     for(auto itr: subsrs){
//         if(check(itr) == true){
//             substrs++;
//         }
//     } 
//     cout << substrs;
// }
//    int numSubarraysWithSum(vector<int>& nums, int goal) {
 //     return atMost(nums, goal) - atMost(nums, goal-1);
 // }
 // int atMost(vector<int>& nums, int goal){
 //     int head, tail = 0, sum = 0, result = 0;
 //     for (head = 0; head < nums.size(); head++) {
 //         sum += nums[head];
 //         while (sum > goal && tail <= head) {
 //             sum -= nums[tail];
 //             tail++;
 //         }
 //         result += head - tail + 1;
 //     }
 //     return result;
 // }
void numberOfSubarrays(vector<int>& nums, int k) {
    int l = 0, r = 0, sum = 0, subarrs = 0;
    while (r < nums.size())
    {
        sum += nums[r]%2;
        while (sum > k)
        {
            sum -= nums[l]%2;
            l++;
        }
        subarrs += (r-l+1);
        r++;
    }
    
}
int main(){
vector <int> nums = {2,2,2,1,2,2,1,2,2,2};
int k = 2;
numberOfSubarrays(nums, k);
return 0;
}