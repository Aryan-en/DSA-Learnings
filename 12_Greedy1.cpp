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
void mostFrequentEven(vector<int>& nums) {
    map <int, int> hash;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]%2 == 0)
        {
            hash[nums[i]]++;
        }
    }
    int largest = INT_MIN;
    int ans; 
    for(auto itr : hash){
        if (itr.second > largest)
        {
            largest = itr.second;
            ans = itr.first;
        }
    }
    cout << ans;
}
int main() {
vector <int> bills = {0,1,2,2,4,4,1};
mostFrequentEven(bills);
return 0;
}