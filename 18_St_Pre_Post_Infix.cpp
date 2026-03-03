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
#include <queue>
using namespace std;
// what is an operation -> (precedence) [^ > * / > + -] /operand -> [A-Z] or [a-z] or [0-9] 
// Prefix -> operator is before the operand -> +AB
// Postfix -> operator is after the operand -> AB+
// Infix -> operator is in between the operand -> A+B
// Infix to Postfix
// Infix to Prefix
// Postfix to Infix
// Prefix to Infix
// Postix to Prefix
// Postfix to Infix

int main() {
// Infix to Postfix
string s = "a+b*(c^d-e)";
stack <char> s1;
string ans = "";
int i = 0;
while(i < s.size()){
    if ((s[i] >= 'A' && s[i] <= 'Z') 
    || (s[i] >= 'a' && s[i] <= 'z') 
    || (s[i] >= '0' && s[i] <= '9')) {
        ans += s[i];
    }
    {
        /* code */
    }
    
}
return 0;
}