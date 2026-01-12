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
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* convert2LL(vector <int> arr) {
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        ListNode* Newnode = new ListNode(arr[i]);
        temp->next = Newnode;
        temp = temp->next;
    }
    return head;
}
void printLL(ListNode* head){
    ListNode* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(0);
    ListNode* p = l1, * q = l2, * curr = dummyHead;
    int carry = 0;
    while (p != nullptr || q != nullptr) {
        int x = (p != nullptr) ? p->val : 0;
        int y = (q != nullptr) ? q->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
        if (p != nullptr) p = p->next;
        if (q != nullptr) q = q->next;
    }
    if (carry > 0) {
        curr->next = new ListNode(carry);
    }
    return dummyHead->next;
}

int main() {
vector <int> arr1 = {9,9,9,9,9,9,9};
vector <int> arr2 = {9,9,9,9};
ListNode* l1 = convert2LL(arr1);
ListNode* l2 = convert2LL(arr2);
addTwoNumbers(l1, l2);
// printLL(result);
return 0;
}