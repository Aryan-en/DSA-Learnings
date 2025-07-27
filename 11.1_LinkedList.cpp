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
struct Node{
    private:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};
int main() {
    vector<int> arr = {2,5,8,7};
    Node* y = new Node(arr[0], nullptr);
    cout << y;
return 0;
}