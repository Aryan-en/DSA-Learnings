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
void uniqueOccurrences(vector<int>& arr) {
    map <int, int> countMap;
    map <int, int> countMap2;
    bool ans = true;
    for (int num : arr) {
        countMap[num]++;
    }
    for(auto itr : countMap){
        countMap2[itr.second]++;
    }
    for(auto itr : countMap2){
        if(itr.second > 1){
            ans = false;
            break;
        }
    }
    // return ans;
}
int main() {
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    uniqueOccurrences(arr);
return 0;
}