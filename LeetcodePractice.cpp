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
string newstr;
int generateTag(string caption) {
        newstr += '#';
        for (int i = 0; i < caption.length(); i++)
        {
            if(caption[i] == ' '){
                caption[i+1] = toupper(caption[i+1]);
                newstr += caption[i+1];
                caption.erase(i+1,1);
            }
            else{
                caption[i] = tolower(caption[i]);
                newstr += caption[i];  
            }
        }
     for (int i = 0; i < newstr.length(); i++)
     {
        if(newstr[i] == '\\'){
            caption.erase(caption[i], 6);
        }
     }
        
    cout << '\\'; 
    return 0;
}
int main() {
generateTag("Bold apple beyond bright future crash mountains glow light gently dance waits shore breeze mind ");
return 0;
}