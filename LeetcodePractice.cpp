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
void reverseVowels(string s) {
    // stack <int> vowindex;
    vector<char> vow;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            // vowindex.push(i);
            vow.emplace_back(s[i]);
            s[i] = '0';
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = vow.back();
            vow.pop_back();
        }
    }
    cout << s << endl;
}
int main() {
reverseVowels("IceCreAm");
return 0;
}