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
// void isAnagram(string s, string t)
// {
//     if (s.length() != t.length())
//     {
//         return false;
//     }

//     else
//     {
//         vector<char> sletters;
//         vector<char> tletters;
//         for (int i = 0; i < s.length(); i++)
//         {
//             sletters.emplace_back(s[i]);
//         }
//         for (int i = 0; i < t.length(); i++)
//         {
//             tletters.emplace_back(t[i]);
//         }
//         for (int i = 0; i < sletters.size(); i++)
//         {
//             for (int j = 0; j < tletters.size(); j++)
//             {
//                 if (sletters[i] == tletters[j])
//                 {
//                     // for (auto itr : sletters)
//                     // {
//                     //     cout << itr << " ";
//                     // }
//                     // cout << endl;
//                     sletters.erase(sletters.begin() + i-1);
//                     tletters.erase(tletters.begin() + j-1);
//                     i = 0;
//                     j = 0;
   
//                 }
//             }
//         }
//         if(sletters.size() + tletters.size() == 2){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// }

// void ArrayRotation(vector <int> &nums, int k){
// // int n=nums.size();
// // k%=n;
// // reverse(nums.begin(),nums.end());
// // reverse(nums.begin(),nums.begin()+k);
// // reverse(nums.begin()+k,nums.end()); 
// sort(nums.begin(), nums.end());
// for(auto itr : nums){
//     cout << itr << " ";
// }
// }
void missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size(), missingNum;
    vector <int> IdealNums;
    vector <int> missingnums;
    for (int i = 0; i <= n; i++)
    {
        IdealNums.emplace_back(i);
    }   
    nums.emplace_back(0);
    // for(auto itr : nums){
    //     cout << itr << " ";
    // } 
    // cout << endl;
    // for(auto itr : IdealNums){
    //     cout << itr << " ";
    // } 
    
    for (int i = 0; i < IdealNums.size(); i++)
    {
        // bool b = (IdealNums[i]!=nums[i]);
        // cout << IdealNums[i] << nums[i] << " " << b  << endl;
        if(nums[i] != IdealNums[i]){
            missingnums.emplace_back(IdealNums[i]);
        }
    }
   missingNum = missingnums[0];
   cout << missingNum;
}
int main()
{
    // #18 Arrays
    vector <int> arr = {0,1};
    missingNumber(arr);
    return 0;
}

