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
// string newstr;
// int generateTag(string caption) {
//         newstr += '#';
//         for (int i = 0; i < caption.length(); i++)
//         {
//             if(caption[i] == ' '){
//                 caption[i+1] = toupper(caption[i+1]);
//                 newstr += caption[i+1];
//                 caption.erase(i+1,1);
//             }
//             else{
//                 caption[i] = tolower(caption[i]);
//                 newstr += caption[i];  
//             }
//         }
//      for (int i = 0; i < newstr.length(); i++)
//      {
//         if(newstr[i] == '\\'){
//             caption.erase(caption[i], 6);
//         }
//      }
        
//     cout << '\\'; 
//     return 0;
// }

vector<int> nums = {1,3,5,6};
int target = 7;
void searchInsert() {
    int ExistingIndex = 0;
    vector<int> newarr;
    for (int i = 0; i < nums.size(); i++)
    {
        if(target == nums[i]){
            ExistingIndex += i;
            // return ExistingIndex;
        }
        else{
            newarr.emplace_back(nums[i]);
        }
    }
}

int main() {
searchInsert();
return 0;
}