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
// Never tamper the head of the linked list
class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;    
}
int lenofLL(Node* head){
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
bool checkIfpresent(Node* head, int val){
    Node* mover = head;
    bool result = false;
    while (mover != NULL)   
    {
        mover = mover->next;
        if (mover->data == val){
            result = true;
        }
    }
    return result;
}
int main() {
    vector<int> arr={12, 5, 8, 7, 323, 30};
    Node* head = convertArr2LL(arr);
    (checkIfpresent(head, 12) == true) ? cout << "Present" << endl : cout << "Not Present" << endl;
return 0;
}