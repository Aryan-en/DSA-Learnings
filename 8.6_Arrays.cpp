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
int reversePairs(vector<int>& nums) {
    int n = nums.size();
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(nums[i] > 2*nums[j]){
                counter++;
            }
        }
        
    }
    return counter;
}
int main() {
vector <int> nums = {2,4,3,5,1};
cout << reversePairs(nums);
return 0;
}