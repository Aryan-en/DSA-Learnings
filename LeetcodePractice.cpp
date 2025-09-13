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
string seq = "3322251";
void countAndSay(int n) {
    // if(n == 1){
    //     return seq;
    // }
    // map<int, int> freq;
    // for (int i = 0; i < seq.length(); i++)
    // {
    //     freq[(seq[i])-48]++;
    // }
    for (int i = 0; i < seq.length(); i++)
    {
        string temp = seq[i];
        for (int j = i; j < seq.length(); j++)
        {
            
        }
    }
    
}
int main() {
countAndSay(4);
return 0;
}