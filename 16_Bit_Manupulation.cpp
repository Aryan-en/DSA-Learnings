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
void mostCommonWord(string paragraph, vector<string>& banned) {
    string lowerStr;
    string STr;
    vector <string> words;
    for (char c : paragraph) {
        lowerStr += tolower(c); // Cast is important for correct character handling
    }
    for (int i = 0; i < lowerStr.length(); i++)
    {
        int a = lowerStr[i];
        if (a >= 97 && a <= 122 || a == 32)
        {
            STr+= lowerStr[i];
        }
    }
    string word;
    for (int i = 0; i < STr.length(); i++)
    {
        word += STr[i];
        int b = STr[i];
        if (b == 32)
        {
            words.emplace_back(word);
            word = "";
        }
        
    }    
    for(auto i : words){
        cout << i << endl;
    }
    // for (int i = 0; i < paragraph.length(); i++)
    // {
    //     
    // }
    
}
int main() {
string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
vector<string> banned = {"hit"};
mostCommonWord(paragraph, banned);
return 0;
}