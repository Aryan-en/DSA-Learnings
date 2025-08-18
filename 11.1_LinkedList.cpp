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
bool check(int n){
vector<int> digits;
int OrgNum = n;
bool ans = false;
while (n != 0)
{
    int a = n%10;
    digits.emplace_back(a);
    n /= 10;
}
for (int i = 0; i < digits.size(); i++)
{
    if (OrgNum%digits[i] == 0)
    {
        digits.erase(digits.begin()+i);
    }  
}
if(digits.size() == 0){
    ans = true;
}
return ans;
}
void selfDividingNumbers(int left, int right) {
vector<int> nums;
vector<int> ans;
for (int i = left; i <= right; i++)
{
    nums.emplace_back(i);
}
for(auto itr : nums){
    if (check(itr) == true)
    {
        ans.emplace_back(itr);
    }  
}

}
int main() {
selfDividingNumbers(47, 85);
return 0;
}