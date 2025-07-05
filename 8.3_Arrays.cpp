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
using namespace std;
// void subarraySum(vector<int>& nums, int k) {
//     int count = 0;
//    for (int i = 0; i < nums.size(); i++)
//    {    
//         int s = 0;
//         for (int j = i; j < nums.size(); j++)
//         {
//             s += nums[j];
//             if(s == k){
//                 count++;
//             }
//         }

//    }
//     cout << count;
// }
// void maxSubArray(vector<int>& nums) {  
// Kadane's Algo just keep moving forward and if sum<0 just drop it 
//     int sum = 0, maxm = INT_MIN;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         sum += nums[i];
//         if(sum > maxm){
//             maxm = sum;
//         }
//         if(sum<0){
//             sum = 0;
//         }
//     }
//     cout << maxm;
    
// }
// bool check(vector<int>& nums){
//     vector <int> sortedArr;
//     bool res = false;
//     int n = nums.size();
//     for(auto itr : nums){
//         sortedArr.emplace_back(itr);
//     }
//     sort(sortedArr.begin(), sortedArr.end());
//    for (int k = 0; k < nums.size()-1; k++)
//    {
//         k%= n;
//         reverse(sortedArr.begin(), sortedArr.end());
//         reverse(sortedArr.begin(), sortedArr.begin()+k);
//         reverse(sortedArr.begin()+k, sortedArr.end());
//         if (nums == sortedArr)
//         {
//             res = true;
//         }   
//    }
//    return res;
// }
// void nextPermutation(vector<int>& nums) {
//       int ind1=-1;
//         int ind2=-1;
//         // step 1 find breaking point 
//         for(int i=nums.size()-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 ind1=i;
//                 break;
//             }
//         }
//         // if there is no breaking  point 
//         if(ind1==-1){
//             reverse(nums,0);
//         }
        
//         else{
//             // step 2 find next greater element and swap with ind2
//             for(int i=nums.size()-1;i>=0;i--){
//                 if(nums[i]>nums[ind1]){
//                     ind2=i;
//                     break;
//                 }
//             }

//             swap(nums,ind1,ind2);
//             // step 3 reverse the rest right half
//             reverse(nums,ind1+1);
//         }
//     }
//     void swap(vector <int> &nums,int i,int j){
//         int temp=nums[i];
//         nums[i]=nums[j];
//         nums[j]=temp;
//     }
//     void reverse(vector <int> &nums,int start){
//         int i=start;
//         int j=nums.size()-1;
//         while(i<j){
//             swap(nums,i,j);
//             i++;
//             j--;
//         }
// }
// void setZeroes(vector <vector<int>> &nums){
    
// }
// int firstMissingPositive(vector<int>& nums) {
//         int n = 1;
//         sort(nums.begin(), nums.end());
//         int largest = nums[nums.size()-1];
//         for (int i = 1; i <= largest+1; i++)
//         {
//             cout << i << endl;
            
//         }
//        return n; 
// }
// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     vector <int> mergedarr;
//     for (int i = 0; i < m; i++)
//     {
//         mergedarr.emplace_back(nums1[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         mergedarr.emplace_back(nums2[i]);
//     }
//     sort(mergedarr.begin(), mergedarr.end());
//     for(auto itr : mergedarr){
//         cout << itr << " ";
//     }
// }
// void spiralOrder(vector<vector<int>>& matrix) {
//     vector <int> ans;
//     int columns = matrix[0].size();
//     int rows = matrix.size();
//     for (int i = 0; i < columns; i++)
//     {
//         ans.emplace_back(matrix[0][i]);
//     }
//     for (int i = 1; i < rows; i++)
//     {
//         ans.emplace_back(matrix[i][columns-1]);
//     }
//     for (int i = columns-2; i >= 0; i--)
//     {
//         ans.emplace_back(matrix[rows-1][i]);
//     }
//     for (int i = 0; i < count; i++)
//     {
//         /* code */
//     }
    
//     for(auto itr: ans){
//         cout << itr << " ";
//     }
    
// }
void firstMissingPositive(vector<int>& nums) {
        int n = 1;
        vector <int> fmp;
        sort(nums.begin(), nums.end());
        int largest = nums[nums.size()-1];
        for (int i = 1; i <= largest; i++)
        {
            fmp.emplace_back(i);
        }
        for (auto itr1 : fmp)
        {
            for (auto itr2: nums)
            {
                
                if(itr1 != itr2){
                    cout << itr1 << " " << itr2 << endl;
                    n = itr1;
                    break;
                }
            }
            
        }
        cout << n;
}
int main() {
vector <int> matrix = {7,8,9,11,12};
firstMissingPositive(matrix);
return 0;
}