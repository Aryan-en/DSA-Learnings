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
int n = 1, n2 = 100;
void f1(){
if(n == 6){}
else{
    cout << "Name" << endl;
    n++;
    f1();
}
}
void f2(){
    if( n == 101){}
    else{
        cout << n << endl; 
        n++;
        f2();
    }
}
void f3(){
    if(n2==0){}
    else{
        cout << n2 << endl;
        n2--;
        f3();
    }
}


// Backtracking
void backtrack1(int i, int m){
    if (i < m){}
    else{
        cout << i << endl;
        backtrack1(i-1, m);
    }
}
void backtrack2(int n1, int n2){
    if(n1> n2){}
    else{
        cout << n1 << endl;
        backtrack2(n1+1, n2);
    }
}
int b = 0, add = 1;
void f4(){
    if(add == 11){
        cout << b;
    }
    else{
        b += add;
        add++;
        f4();
    }
}

void f5(int num){
    if (num<0)
    {
        cout << b;
    }
    else{
        b = b+num;
        // cout << b << endl;
        f5(num-1);
    }
}
int c = 1;
void fact(int number){
if(number == 1 || number == 0){
    cout << c;
}
else{
    c *= number;
    fact(number-1);
}
}
int fact2(int nu){
    if(nu == 1 || nu == 0){
        return 1;
    }
    return nu*fact2(nu-1);
}

void RevArr(int arr[], int n1, int n2){
if (n1 >= n2) {
    for (int i = 0; i <= (sizeof(arr)/sizeof(arr[0])) -1; i++)
   {
    cout << arr[i], ", ";
   }
} 

else {    
    swap(arr[n1], arr[n2]);
    RevArr(arr, n1+1, n2-1);
}
}

int main() {
int arr[] = {1,2,3,4,5,6};
int  l = (sizeof(arr)/sizeof(arr[0])) -1, r=0;
RevArr(arr,r,l);
return 0;
}