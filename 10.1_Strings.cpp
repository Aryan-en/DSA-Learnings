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

// void isSubsequence(string s, string t) {
//      bool c1 = false, c2 = false, c3 = false;
//      for (int i = 0; i < t.length(); i++)
//      {
//           for (int j = 0; j < s.length(); j++)
//           {
               
//           }
          
//      }
     
// }
// void rotateString(string s, string goal) {
//      int ns = s.length();
//      int gs = goal.length();
//      vector<char> rotated;
//      for (int i = 0; i < ns; i++)
//      {
//           rotated.emplace_back(s[i]);
//      }
     
// }     
// void removeOuterParentheses(string s) {
//      string Ans_Str = "";
//      int j = 0;
//      for (int i = 0; i < s.size(); i++)
//      {
//           if(s[i] == ')'){
//                j--;
//           }
//           if (j != 0)
//           {
//                Ans_Str += s[i];
//           }
          
//           if (s[i] == '(')
//           {
//                j++;
//           }    
//      }
//      cout << Ans_Str;    
     
// }
// void reverseWords(string s) {
//      // removing starting space
//      int n = s.length();
//      int i = 0, j = n-1;
//      while (s[i] ==  ' ')
//      {
//           s.erase(i, 1);

//      }
//      // removing ending space
//      while (s[j] == ' ')
//      {
//           s.erase(j, 1);
//           j--;
//      }
//      string Trimed = s;
//      vector <string> word;
//      for (int i = 0; i < Trimed.length(); i++)
//      {
//           string push_str = "";
//           push_str += Trimed[i];
//           // cout << push_str;
//           if (Trimed[i] == ' ')
//           {    
//                cout << push_str;
//                word.emplace_back(push_str);
//                // push_str.clear();
//                // cout << "space";
//           }    
//      }
// //     for(auto itr : word){
// //           cout << itr << " ";
// //     }
// cout << word[0];
// }
// void largestOddNumber(string num) {
// int n = num.length();
// string ans = "";
// int Realans = INT_MIN;
// for (int i = 0; i < n; i++)
// {
//      ans += num[i];
//      if (stoi(ans)%2 != 0 && stoi(ans) > Realans) 
//      {
//           Realans = stoi(ans);
//      }
// }
// string answer;
// (Realans == INT_MIN) ? answer = "" : answer = to_string(Realans);
// cout << answer;
// }
// bool isIsomorphic(string s, string t) {
//      bool ans = true;
//      map <char, int> hash1;
//      map <char, int> hash2;
//      vector<int>freq1;
//      vector<int>freq2;
//      if (s.length() != t.length())
//      {
//           return false;
//      }
//      for (int i = 0; i < s.length(); i++)
//      {
//           hash1[s[i]]++;
//           hash2[t[i]]++;
//      }
//      for(auto itr : hash1){
//           freq1.emplace_back(itr.second);
//      }
//      for(auto itr : hash2){
//           freq2.emplace_back(itr.second);
//      }
//      int i = 0, j=0;
//      while (i<s.length() && j < t.length())
//      {
//           if(freq1[i] != freq2[j]){
//                ans = false;
//           }
//           i++;
//           j++;
//      }
//      return ans;
// }
// void isValid(string s) {
// map <char, int> hash;
// for (int i = 0; i < s.length(); i++)
// {
//     hash[s[i]]++;
// }
// for(auto itr : hash){
//     cout << itr.first << "->" << itr.second << endl;
// }
// }
// void reverseString(vector<char>& s) {
//     vector <char> ans;
//     int n = s.size();
//     for (int i = n-1; i >= 0; i--)
//     {
//         ans.emplace_back(s[i]);
//     }
//     s.clear();
//     for(auto itr : ans){
//         s.emplace_back(itr);
//     }           
// }
// bool isPrime(int n){
// vector <int> factors;
// bool isPrimeAns = false;
// int sum = 0;
// for (int i = 1; i <= n; i++)
// {
//     if (n%i == 0)
//     {
//         factors.emplace_back(i);
//     }
// }
// for(auto itr : factors){
//     sum+= itr;
// }
// if (sum == (n+1))
// {
//     isPrimeAns = true;
// }
// return isPrimeAns;
// }
// bool isUgly(int n) {
// vector <int> primefactors;
// bool ans = false;
// if (n < 0)
// {   
//     return false;
// }
// if(n == 1){
//     return true;
// }
// for (int i = 2; i <= n/2; i++)
// {
//     if (n%i == 0 && isPrime(i) == true)
//     {
//         primefactors.emplace_back(i);
//     }
// }
// int sum = 0;
// for(auto itr: primefactors){
//     sum+= itr;
// }
// if(sum == 2 || sum == 3 || sum == 5 || sum == 7 || sum == 8 || sum == 10){
//     ans = true;
// }
// return ans;
// }
// float answer(float num){
//     if (num <= 1)
//     {
//         return num;
//     }
//     return answer(pow(num, 0.5));
// }
// void isPowerOfTwo(int n) {
//     bool ans = false;
//     int a = answer(n);
//     cout << a;
// }
// void toLowerCase(string s) {
//     string ans = "";
//     for (int i = 0; i < s.length(); i++)
//     {
//         char let = (char)tolower(s[i]);
//         ans += let;
//     }
//     cout << ans;
// }
void rotateString(string s, string goal) {
        
}
int main() {
rotateString("abcde", "cdeab");
return 0;
}