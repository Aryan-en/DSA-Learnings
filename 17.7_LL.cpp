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
ListNode* convert2LL(vector<int>& nums){
    if(nums.size() == 0){return NULL;}
    ListNode* head = new ListNode(nums[0]);
    ListNode* curr = head;
    for (int i = 1; i < nums.size(); i++)
    {
        curr->next = new ListNode(nums[i]);
        curr = curr->next;
    }
    return head;
}
void printLL(ListNode* head){
    if(head == NULL || head->next == NULL){
        return;
    }
    ListNode* itr = head;
    while(itr != NULL){
        cout << itr->val << " ";
        itr = itr->next;
    }
}
bool hasCycle(ListNode *head) {
    bool flag = false;
    map <ListNode*, int> mp;
    ListNode* temp = head;
    while(temp!= NULL){
        if(mp.find(temp) != mp.end()){
            flag = true;
            break;
        }
        else{
            mp[temp] = 1;
        }
        temp = temp->next;
    }
    return flag;
}
ListNode* detectCycle(ListNode *head) {
    map <ListNode*, int> mp;
    ListNode* temp = head;
    while (temp != NULL)
    {
        if(mp.find(temp) != mp.end()){
            return temp;
        }
        else{
            mp[temp] = 1;
        }
        temp = temp->next;
    }
    return NULL;
}
bool isPalindrome(ListNode* head) {

    vector<int> vals;
    vector<int> rev;
    ListNode* itr = head;
    while(itr != NULL){
        vals.emplace_back(itr->val);
        itr = itr->next;
    }
    for(int i = vals.size() - 1; i >= 0; i--){
        rev.emplace_back(vals[i]);
    }
    return (true) ? (vals == rev) : false;
}
ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
            ListNode* slow = head;
            ListNode* fast = head;
            
            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;
            }
            delete slow;
            return head;
    
}
ListNode* removeNthFromEnd(ListNode* head, int n) {
    vector<int> vals;
    ListNode* itr = head;
    while(itr != NULL){
        vals.emplace_back(itr->val);
        itr = itr->next;
    }
    vals.erase(vals.end() - n);
    return convert2LL(vals);
}
int main() {
vector<int> nums = {1,3,4,1}; 
ListNode* head = convert2LL(nums); 
ListNode* removeN = removeNthFromEnd(head, 2);
return 0;
}