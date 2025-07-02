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
//#17 of Array
int singleNumber(vector<int>& nums) {
    map<int,int> hash;
    int num = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        hash[nums[i]]++;
    }
    for(auto it: hash){
        if(it.second == 1){
            num += it.first;
        }
    }
    return num;   
}
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
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp2 = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp2;
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
    for(auto itr : nums){
        if(itr > largest){
            largest = itr;
        }
    }
    cout << largest;
}
void second_largest_withoutSorting(vector <int> &nums){
int largest = nums[0];
int secondL = nums[1];
for (int i = 0; i < nums.size(); i++)
{
    if(nums[i] > largest){
        largest = nums[i];
    }
}
for (int i = 0; i < nums.size(); i++)
{
    if(nums[i] > secondL && nums[i] != largest){
        secondL = nums[i];
    }
}
cout << secondL;
}
int main() {
vector <int> nums = {1,3,4,7,9,239,32,43,500,7828,343,7828,7828,7828};
second_largest_withoutSorting(nums);
return 0;
}