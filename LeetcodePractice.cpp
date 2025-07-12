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
void findDisappearedNumbers(vector<int>& nums) {
    // int n = nums.size();
    // vector<int> newarr;
    // map <int, int> hash;
    // for (int i = 0; i < n; i++)
    // {
    //     hash[nums[i]]++;
    // }
    // int i = 1;
    // for(auto it : hash){
    //     if(i != it.first){
    //         newarr.emplace_back(i);
    //     }
    //             i++;
    // }
    // for(auto it : newarr){
    //     cout << it << " ";
    // }
    int arr[2] = {1,2};
    int arr2[2] = {1,4};
    int arr3[] = arr - arr2;
}
int main() {
vector<int> nums = {1,1};
findDisappearedNumbers(nums);
return 0;
}