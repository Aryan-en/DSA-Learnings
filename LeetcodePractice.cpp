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
// bool checkDivisibility(int n) {
//     vector <int> digits;
//     bool ans = false;
//     int OrgVal = n;
//     while (n != 0)
//     {
//         digits.emplace_back(n%10);
//         n = n/10;
//     }
//     int product = 1, sum = 0;
//     for(auto itr : digits){
//         product *= itr;
//         sum+= itr;  
//     }
//     if (product+sum == OrgVal)
//     {
//         ans = true;
//     }
    
//     return ans;
// }
void isIsomorphic(string s, string t) {
    map <char, int> hash1;
    map <char, int> hash2;
    for (int i = 0; i < s.length(); i++)
    {
        hash1[s[i]]++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        hash2[s[i]]++;
    }
    for(auto itr1 : hash1){
        for(auto itr2 : hash2){
            
        }
    }
}
int main() {
isIsomorphic("egg", "add");
return 0;
}