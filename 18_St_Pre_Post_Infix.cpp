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

// example -> a+b*(c^d-e) 
void infixtopostfix(){
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
    else if(s[i] = '('){
        s1.push(s[i]);
    }
    else if(s[i] = ')'){
        while(!s1.empty() && s1.top() != '('){
            ans += s1.top();
            s1.pop();
        }
        if(!s1.empty()){
            s1.pop();
        }
    }
    else{
        while(!s1.empty() && s1.top() != '('){
            ans += s1.top();
            s1.pop();
        }
        s1.push(s[i]);
    }
    i++;
    while (!s1.empty())
    {
        ans += s1.top();
        s1.pop();
    }
}
}

// example -> a+b*(c^d-e) -> -+a*b^-cde
void infixtoprefix(){
string s = "a+b*(c^d-e)";
stack <char> s2;
string ans = "";
int n = s.length();
reverse(s.begin(), s.end());
int i = 0;
while (i < n)
{
    if ((s[i] >= 'A' && s[i] <= 'Z') 
    || (s[i] >= 'a' && s[i] <= 'z') 
    || (s[i] >= '0' && s[i] <= '9')) {
        ans += s[i];
    }
    else if(s[i] == ')'){
        s2.push(s[i]);
    }
    else if(s[i] == '('){
        while(!s2.empty() && s2.top() != ')'){
            ans += s2.top();
            s2.pop();
        }
        if(!s2.empty()){
            s2.pop();
        }
    }
    else{
        while(!s2.empty() && s2.top() != ')'){
            ans += s2.top();
            s2.pop();
        }
        s2.push(s[i]);
    }
    i++;
    while (!s2.empty())
    {
        ans += s2.top();
        s2.pop();
    }
    
}
// similarly we can do for postfix to infix and prefix to infix
}
int main() {
return 0;
}