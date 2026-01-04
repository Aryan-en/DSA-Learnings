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
struct ListNode{
    int data;
    ListNode* next;
    ListNode(int data1, ListNode* next1){
        data = data1;
        next = next1;
    }
    ListNode(int data1){
        data = data1;
        next = nullptr;
    }
};
ListNode* convertarr2LL(vector<int> arr){
    int n = arr.size();
    ListNode* head = new ListNode(arr[0]);
    ListNode* mover = head;
    for (int i = 1; i < n; i++)
    {
        ListNode* temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void displayLL(ListNode* head){
    ListNode* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}
// Del elem
ListNode* deletehead(ListNode* head){
    if(head == NULL) return head;
    ListNode* temp = head;
    head = head->next;
    delete temp;    
    return head;
}
// Insert elem
ListNode* inserthead(ListNode* head, int data){
    ListNode* newnode = new ListNode(data);
    newnode->next = head;
    head = newnode;
    return head;
}
int main() {
    vector <int> L1 = {4,5,1,9};
    ListNode* head1 = convertarr2LL(L1);
    head1 = inserthead(head1, 10);
    displayLL(head1);
return 0;
}