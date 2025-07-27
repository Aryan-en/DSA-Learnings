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
void removeOuterParentheses(string s) {
     string Ans_Str = "";
     int j = 0;
     for (int i = 0; i < s.size(); i++)
     {
          if(s[i] == ')'){
               j--;
          }
          if (j != 0)
          {
               Ans_Str += s[i];
          }
          
          if (s[i] == '(')
          {
               j++;
          }    
     }
     cout << Ans_Str;    
     
}
int main() {
removeOuterParentheses("(()())(())(()(()))");
return 0;
}