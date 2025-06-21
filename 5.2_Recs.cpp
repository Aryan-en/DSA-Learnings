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
// int arr[] = {1,2,3,4,5,6};
// int  l = (sizeof(arr)/sizeof(arr[0])) -1, r=0;
// void RevArr(int n1, int n2){
// if (n1 >= n2) {
//     for (int i = 0; i <= (sizeof(arr)/sizeof(arr[0])) -1; i++)
//    {
//     cout << arr[i], ", ";
//    }
// } 

// else {    
//     swap(arr[n1], arr[n2]);
//     RevArr(n1+1, n2-1);
// }
// }

// int checkpalindrome(int i, string wrd){
//     if (i >= (wrd[wrd.length()])/2){ return true;
//     }
//     if(wrd[i] != wrd[wrd.length()-i-1]) {return false;}
//     return checkpalindrome(i++, wrd);
// }
int fibonacci(int n){
        if(n <2){
        if(n == 0){
            return 0;
        }
            return 1;
        }   
        return fibonacci(n-2)+fibonacci(n-1);
}
int main() {
// string word = "ASA";
// cout << checkpalindrome(0, word);
cout << fibonacci(4);
return 0;
}