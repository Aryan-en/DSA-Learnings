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
void subarraysWithKDistinct(vector<int>& nums, int k) {
    int r = 0, l = 0, ans = 0;
    map <int, int> hash;
    while (r < nums.size())
    {
        hash[nums[r]]++;
        while (hash.size() <= k)
        {
            hash[nums[r]]--;
            if(hash[nums[l]] == 0){
                hash.erase(nums[l]);
            }
            l--;
        }
        ans += (r-l+1);
        r++;
    }
    cout << ans;
}
int main() {
vector <int> nums = {1,2,1,2,3};
subarraysWithKDistinct(nums, 2);
return 0;
}