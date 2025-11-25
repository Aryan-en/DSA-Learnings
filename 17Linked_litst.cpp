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
void maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int prod1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int prod2 = nums[0] * nums[1] * nums[n - 1];
    int result = max(prod1, prod2);
    cout << "Maximum Product: " << result << endl;
}
int main() {
    vector<int> nums = {1, 2, 3, 4};
    maximumProduct(nums);
return 0;
}