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
ListNode* conver2LL(vector<int>& vals){
    ListNode* head = new ListNode(vals[0]);
    ListNode* temp = head;
    for (int i = 1; i < vals.size(); i++)
    {
        ListNode* newNode = new ListNode(vals[i]);
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}
void displayLL(ListNode* head){
    ListNode* itr = head;
    while (itr != NULL)
    {
        cout << itr->val << " -> ";
        itr = itr->next;
    }
}
ListNode* oddEvenList(ListNode* head) {
        vector<int> samplespace;
        ListNode* itr = head;
        while (itr != NULL)
        {
            samplespace.emplace_back(itr->val);
            itr = itr->next;
        }
        vector<int> odd, even;
        for (int i = 0; i < samplespace.size(); i++)
        {
            if (i % 2 == 0)
                odd.emplace_back(samplespace[i]);
            else
                even.emplace_back(samplespace[i]);
        }
        vector<int> result;
        for (int i = 0; i < odd.size(); i++)
        {
            result.emplace_back(odd[i]);
        }
        for (int i = 0; i < even.size(); i++)
        {
            result.emplace_back(even[i]);
        }
        return conver2LL(result);
}
ListNode* sortList(ListNode* head){
    vector<int> sample;
    ListNode* itr = head;
    while (itr != NULL)
    {
        sample.emplace_back(itr->val);
        itr = itr->next;
    }
    sort(sample.begin(), sample.end());
    return conver2LL(sample);
}
ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;
    ListNode* itr = head;
    while (itr != NULL)
    {
        if(itr->next != NULL && itr->val == itr->next->val){
            ListNode* temp = itr->next;
            itr->next = itr->next->next;
            delete temp;
        }
        else{
            itr = itr->next;
        }
    }
    
    
}
int main() {
    vector<int> vals = {4,2,1,3};
    ListNode* head = conver2LL(vals);
    deleteDuplicates(head);
    displayLL(head);
return 0;
}