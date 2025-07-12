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
// void merge(vector<vector<int>>& intervals) {
//     // sort(intervals.begin(), intervals.end());
// for(auto row : intervals){
//     for(auto elem : row){
//         cout << elem << " ";
//     }
//     cout << endl;
// }
// }
// int reversePairs(vector<int>& nums) {
//     int n = nums.size();
//     int counter = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(nums[i] > 2*nums[j]){
//                 counter++;
//             }
//         }
        
//     }
//     return counter;
// }
void topKFrequent(vector<int>& nums, int k) {
        map <int, int> hash;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            hash[nums[i]]++;
        }
        map<int, int>::iterator itr = hash.begin();
        int largest = itr->second;
        for (; itr != hash.end(); itr++)
        {
            if (itr->second > largest)
            {
                largest = itr->second;
            }
            
        }
        cout << largest;
}
int main() {
vector <int> nums = {1,1,1,2,2,3};
int k = 2;  
topKFrequent(nums, k);
return 0;
}