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
// Hashing => Precomputation & Fetching
void NumberHash(){
    int arr[5] = {1,1,2,2,3};
    // Precomputation

    int hash[13] = {0};
    for (int i = 0; i < 5; i++)
    {
        hash[arr[i]] += 1;
    }

    // Fetching
    cout << hash[2];
}

// Character Hashing

void CharacterHashing(){
    char arr2[5] = {'a', 'b', 'b','c','a'};
    int hash[26] = {0};
    for (int i = 0; i < 5; i++)
    {
        hash[arr2[i]]++;
    }
    cout << hash['a'];
}

void STLMapHash(){
    int arr3[] = {1,2,2,3,3,3,4,4,4,4};
    map<int,int> mpp;
    vector<int> vals;
    for (int i = 0; i < 10; i++)
    {
        mpp[arr3[i]]++;
    }
    for(auto itr : mpp){
        vals.emplace_back(itr.second);
    }
    sort(vals.begin(), vals.end());
    // for(vector<int>::iterator itr = vals.begin(); itr == vals.begin();){
        cout << "Highest frequency: " << *(vals.end() -1) << endl;
        cout << "Least frequency: " << *(vals.begin());
   
// Explanation: basicaly map is a key value pair type tool of
// STL C++ similar to dictionary in python so first the array
// is taken after which a loop stores the values of the arrays
// as keys in the map and then when the loop sees it's repeated
// it adds 1 to it and hence when we an elements frequency
// it automatically takes the value as key and returns the value
// as the value is the frequency.
}
int main() {
STLMapHash();
return 0;
}