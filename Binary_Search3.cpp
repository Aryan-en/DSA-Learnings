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
// void processStr(string s, int k) {
// int n = s.length();
// string result = "";
// for (int i = 0; i < n; i++)
// {
//     if(s[i] == '*'){
//         result.erase(result.length()-1, 1);
//     }
//     if(s[i] == '#'){
//         result = result+result;
//     }
//     if(s[i] == '%'){
//         reverse(result.begin(), result.end());
//     }
//     if(s[i] != '*' && s[i] != '#' && s[i] != '%'){
//         result += s[i];
//     }
// }
// }
void minEatingSpeed(vector<int>& piles, int h) {
float rate = 2, totaltime = 0;
while (totaltime <= h)
{
for (int i = 0; i < piles.size(); i++){
    float val = static_cast<float>(piles[i])/(rate);
    cout << val << endl;
}
}

}
int main() {
vector <int> arr = {3,6,7,11};
minEatingSpeed(arr, 8);
return 0;
}