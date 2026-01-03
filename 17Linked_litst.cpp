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
class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data1 = data;
        next1 = next;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main() {
    Node* head=new Node(1, nullptr);
    cout << head->data << endl;
return 0;
}