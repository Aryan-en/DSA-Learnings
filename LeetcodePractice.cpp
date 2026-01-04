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
int hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end());
    int n = citations.size();
    int h = n;
    
    cout << endl;
    return h;
}
int main()
{
    vector<int> citations = {3, 0, 6, 1, 5};
    cout << hIndex(citations) << endl;
    return 0;
}