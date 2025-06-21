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
void numbershower(){
        long int N = 934934; 
    int tens = 1;
    vector <int> arr;
    
while (N!=0)
{
    // cout << tens << endl;
    int c = N%10;
    arr.emplace_back(c*tens);
    tens = tens*10;
    N = N/10; 
}

for(vector<int>::iterator itr = (arr.end()-1); itr != arr.begin()-1;itr--){
    if(itr == arr.begin()){
       cout << *itr; 
    }
    else{
         cout << *itr << "+";
    }
}   
}
void Digit_COunter(long int n){
    int score = 0;
    while (n != 0)
    {
        n = n/10;
        score++;
    }
    cout << "Number of digits: "<< score;
}

void NumberReverser(int n){
    vector <int> nums;
    int newnum=0, tens=1;
    cout << "Original Num: " << n << endl;
    while (n!=0)
    { 
        int c = n%10;
        nums.emplace_back(c);
        n = n/10;
        tens *= 10;
    }
    for(auto itr : nums){
        tens = tens/10;
        newnum = newnum + (itr*tens);

    }
    // Check for 32-bit integer overflow
        if (n < INT_MIN || n > INT_MAX) {cout << 0;}

    cout << "Reversed Num: " << newnum;
}
void palindrome(int n){
    vector <int> nums;
    int newnum=0, tens=1;
    int OrgNum = n;
    while (n!=0)
    { 
        int c = n%10;
        nums.emplace_back(c);
        n = n/10;
        tens *= 10;
    }
    for(auto itr : nums){
        tens = tens/10;
        newnum = newnum + (itr*tens);

    }
    if(OrgNum == newnum){
        cout << OrgNum << " is a palindrome" << endl;
    }
    else cout << OrgNum << " is not a palindrome" << endl;
}
void Amstrong(int n){
    vector<int> digits;
    int num = 0;
    int Orgnum = n;
    while (n!=0)
    {
        int c = n%10;
        digits.emplace_back(c);
        n = n/10;
    }
    for(auto itr : digits){
        num = num + (itr*itr*itr);
    }
    if(Orgnum == num){
        cout << Orgnum << " Is amstrong" << endl;
    }
    else cout << Orgnum << " Is not amstrong" << endl;
}

void Divisors(int n){
vector<int> divs;
for (int i = 1; i <= n/2; i++)
{
    if(n%i == 0){
        divs.emplace_back(i);
    }
}
sort(divs.begin(), divs.end());
for(auto itr: divs){
    cout << itr << endl;
}
}

void prime(int n){
vector<int> divs;
int newnum = 0, sum = n+1;
for (int i = 1; i <= n/2; i++)
{
    if(n%i == 0){
        divs.emplace_back(i);
    }
}
divs.emplace_back(n);
sort(divs.begin(), divs.end());
for(auto itr: divs){
    newnum = newnum + itr;
}
if(n == 1){
    cout << n << " is neither prime nor composite" << endl;
}
else{
if(newnum == sum) cout << n << " Is prime" << endl;
else cout << n << " Is not prime" << endl;
}
}




void GCD(int n, int m){
// cout << "Divisors for first num" << endl;
vector<int> divs1;
vector<int> commondivs;

for (int i = 1; i <= n/2; i++)
{
    if(n%i == 0){
        divs1.emplace_back(i);
    }
}
divs1.emplace_back(n);
sort(divs1.begin(), divs1.end());
// for(auto itr1: divs1){
//     cout << itr1 << endl;
// }

// cout << "Dvisiors for second num" << endl;
vector<int> divs2;
for (int i = 1; i <= m/2; i++)
{
    if(m%i == 0){
        divs2.emplace_back(i);
    }
}
divs2.emplace_back(m);
sort(divs2.begin(), divs2.end());
// for(auto itr2: divs2){
//     cout << itr2 << endl;
// }

for(auto i: divs1){
    for(auto j: divs2){
        if(j==i){
            commondivs.emplace_back(i);
        }
    }
}
// cout << endl;
// for(auto iter: commondivs){
//     cout << iter << endl;
// }
// cout << endl;
vector<int>::iterator end = commondivs.end()-1;
cout << "GCD of " << n << " and " << m << " is " << *end;
}
int main() {
GCD(9, 81);
return 0;
}