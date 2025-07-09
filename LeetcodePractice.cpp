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

int main() {
int n;
cin >> n;
string arr[n] = {};
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
for (int j = 0; j < n; j++)
{
    if (arr[j].length() > 10)
    {
        cout << arr[j][0] << arr[j].length()-2 << arr[j][arr[j].length()-1] << endl;
    }
    else{
        cout << arr[j] << endl;
    }
}

return 0;
}