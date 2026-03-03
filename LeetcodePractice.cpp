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
#include <queue>
using namespace std;

int firstUniqChar(string s) {
    map <char, int> hash;
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }        
    for(int i = 0; i < s.size(); i++) {
        if (hash[s[i]] == 1) {
            for (int j = 0; j < s.length(); j++)
            {
                if(s[i] == s[j]) {
                    return j;
                }
            }
            
        }
    }
    return -1;
}
int main() {
cout << firstUniqChar("leetcode") << endl;
return 0;
}