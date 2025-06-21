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
using namespace std;

int isPalindrome(int x) {
    int OrgNum = x;
        if(x<0) {
            return false;
        }
    else{
        long long rev = 0;

        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }
        if (rev < INT_MIN || rev > INT_MAX)
            {
                return false;
            }
        if (OrgNum == rev)
        {
            return true;
        }
        
        return 0;
    }
}
int main() {
isPalindrome(-1);
return 0;
}