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
bool buddyStrings(string s, string goal) {
    bool ans = false;
    string Org = s;
    if(s.length() != goal.length()){
        return false;
    }
    string tempstr;
    for (int i = 0; i < s.length(); i++)
    {
        
        for (int j = i; j < s.length(); j++)
        {
            char tempcr = s[i];
            s[i] = s[j];
            s[j] = tempcr;
        }
        cout << s << endl;
        
    }
    return ans;
}
int main() {
string s = "abcd", goal = "badc";
cout << buddyStrings(s, goal);
return 0;
}