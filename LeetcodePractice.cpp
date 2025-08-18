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
bool isPowerOfThree(int n) {
    bool ans = false;
    if (n <0)
    {
        return false;
    }
    for (int i = 0; i < ceil(n/2); i++)
    {
        if (pow(3,i))
        {
            /* code */
        }
        
    }
    return ans;
}
int main() {
// isPowerOfThree(0);
cout << pow(3,1);
return 0;
}