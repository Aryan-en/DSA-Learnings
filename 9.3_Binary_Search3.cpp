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
// void processStr(string s, int k) {
// int n = s.length();
// string result = "";
// for (int i = 0; i < n; i++)
// {
//     if(s[i] == '*'){
//         result.erase(result.length()-1, 1);
//     }
//     if(s[i] == '#'){
//         result = result+result;
//     }
//     if(s[i] == '%'){
//         reverse(result.begin(), result.end());
//     }
//     if(s[i] != '*' && s[i] != '#' && s[i] != '%'){
//         result += s[i];
//     }
// }
// }
// Brute force for KOKO banana
// int tottalhrs(vector<int>& piles, double rate){
// int totaltime = 0;
//     for (int i = 0; i < piles.size(); i++){
//     double val = static_cast<double>(piles[i])/(rate);
//     totaltime += ceil(val);
//     } 
//     return totaltime;
// }
// int minEatingSpeed(vector<int>& piles, int h) {
// int max = INT_MIN;
// for (auto itr : piles){
//     if (itr > max)
//     {
//         max = itr;
//     }  
// }
// for (int rate = 1; rate <= max; rate++)
// {
//     int reqtime = tottalhrs(piles, rate);
//     if (reqtime <= h)
//     {
//         return rate;
//     }
    
// }
// return -1;
// }
void smallestDivisor(vector<int>& nums, int threshold) {
       
}
int main() {
vector <int> arr = {1,2,5,9};
int threshold = 6;
smallestDivisor(arr, threshold);
return 0;
}