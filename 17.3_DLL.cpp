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
// Doubly Linked List can go both forward and backwards
struct Node{
    public: 
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};
Node* Convert2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        temp->prev = prev;
        prev->next = temp;
        prev = temp; 
    }
    return head;
}
void printDLL(Node* head){
    Node* curr = head;
     while(curr != nullptr){
        cout << curr->data << " ";
        curr = curr->next;
    }
}
Node* deleteDLL(Node* head){
    if(head == NULL) return NULL;
    Node* prev = head;
    head = head->next;
    head->prev = NULL;
    prev->next = NULL;

    delete prev;
    return head;
}
Node* insertDLL(Node* head, int data){
    Node* newNode = new Node(data);
    if(head == NULL) return newNode;
    newNode->next = head;
    head->prev = newNode;
    return newNode;
}
// Stack -> LIFO

//Reverse a DLL
Node* reverseDLL(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    Node* head = Convert2DLL(arr);
    Node* reversedHead = reverseDLL(head);
    printDLL(reversedHead);
return 0;
}