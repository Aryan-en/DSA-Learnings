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
void fizzBuzz(int n) {
vector <string> arr;
for (int i = 1; i <= n; i++)
{
    arr.emplace_back(to_string(i));
}
for(int i = 0; i < arr.size(); i++){
    if(stoi(arr[i])%3 == 0){
         if(stoi(arr[i])%5 == 0){
        arr[i] = "FizzBuzz";
    }
        else{
            arr[i] = "Fizz";
        }
    }
    else if(stoi(arr[i])%5 == 0){
    if(stoi(arr[i])%3 == 0){
        arr[i] = "FizzBuzz";
    }
    else{
        arr[i] = "Buzz";
    }
    }
}
for(auto itr : arr){
    cout << itr << " ";
}
}
int main() {
fizzBuzz(3);
return 0;
}