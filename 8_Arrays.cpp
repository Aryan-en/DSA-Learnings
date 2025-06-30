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
// int singleNumber(vector<int>& nums) {
//     map<int,int> hash;
//     int num = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         hash[nums[i]]++;
//     }
//     for(auto it: hash){
//         if(it.second == 1){
//             num += it.first;
//         }
//     }
//     return num;   
// }
int removeDuplicates(vector<int>& nums) {
 map<int,int> hash;
 vector <int>Unique;
 for (int i = 0; i < nums.size(); i++)
 {
    hash[nums[i]]++;
 }
 for(auto itr : hash){
    Unique.emplace_back(itr.first);
 }
return Unique.size();
}

int partition(vector <int> &arr, int low, int high){
    int pivot = arr[high];
    int i = (low-1);

    for (int j = low; j <= high-1; j++)
    {
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}
void Sort(vector<int> &arr, int low, int high){
    if(low<high){
        int pI = partition(arr, low, high);
        Sort(arr, low, pI-1);
        Sort(arr, pI+1, high);
    }
}

void largestElem1(vector <int> &nums){
    Sort(nums, 0, nums.size()-1);
    cout << "Largest element: " << nums[nums.size()-1];
}
void largestElem2(vector <int> &nums){
    int largest = nums[0];
    
}
int main() {
vector <int> nums = {1,3,4,7,9,239,32,43,7828,343};
largestElem2(nums);
return 0;
}