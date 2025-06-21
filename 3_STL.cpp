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
void ExplainPairs(){
    //pairs
    pair<int, int> p = {1,2};

    // more nums
    pair<int, pair<int,int>> p2 = {1,{1,2}};
    pair<int, int> arr[] = {{1,2}, {1,4}, {1,6}, {1,8}};
    cout << arr[1].second;
}
void vecs(){
    vector<int> vec1;
    vec1.push_back(1);
    vec1.emplace_back(2);
    vector <pair<int, int>> vec2;
    vec2.push_back({1,2});
    vec2.emplace_back(3,4);

    vector<int> v3(5, 20); //5 instances of 20

    vector <int> expvec;
    for (int i = 0; i < 10; i++)
    {
        expvec.emplace_back(i);
    }
    expvec.erase(expvec.begin(), expvec.begin()+2);
    expvec.insert(expvec.begin()+1,3, 1000);
    for (auto itr : expvec)
    {
        cout << itr << endl;
    }
    // vecs.clear(), vecs.copy(), vec.size(), vec.pop_back(), v1.swap(v2)
    
}
void lists (){
    list<int> lst;
    lst.push_back(2);
    lst.emplace_back(1);
    lst.push_front(3);
    lst.emplace_front();
    for(auto itr : lst){
        cout << itr << endl;
    }
}
void Stacks(){
 stack<int> st;
 //now methods of that
}
void sets(){
    set<int> setsy; // Sorted and Unique
    // find, count and erase methods are most important
    multiset<int> multisetss;
    //Just sorted repeated units can be placed in it
    // unordered_set<int> s; -> stores everything unique and unordered
}
void maps(){
    // key value pairs {key, value}
    map <int,int> mpp;
    mpp[1] = 2;
    mpp.emplace(3,4); 
    for(auto it : mpp){
        cout << it.first << " & " << it.second << endl;
    }
    multimap <int,int> multmpp; //Can store multiple keys   
}
// Algorithms
void algos(){
    // Refer STL lec 6 again (last part)
}
int main() {
    maps();
return 0;
}