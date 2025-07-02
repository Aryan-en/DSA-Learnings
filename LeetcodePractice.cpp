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
void threeSum(vector<int>& nums) {
    int target = 0;
    set<int> triplets;
    set <set<int>> triptrip;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            for (int k = j+1; k < nums.size(); k++)
            {
                // cout << "triplets = " << nums[i] << " " << nums[j] << " " << nums[k] << endl;
                if(nums[i]+nums[j]+nums[k] == target){
                    triplets.insert(nums[i]);
                    triplets.insert(nums[j]);
                    triplets.insert(nums[k]);
                    triptrip.insert(triplets);
                    triplets.clear();
                }
            }
        }  
    }
for (int i = 0; i < triptrip.size(); i++)
{   
    cout << "[";
    for (int j = 0; j < 3; j++)
    {
        cout << triptrip[i][j] << ", ";
    }
    cout << "]";
    cout << endl;
}

           
}
int main(){
vector<int> nums = {-1,0,1,2,-1,-4};
threeSum(nums);
return 0;
}