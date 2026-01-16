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
ListNode* Conver2LL(vector<int>& nums){
    if(nums.size() == 0) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* curr = head;
    for(int i = 1; i < nums.size(); i++){
        curr->next = new ListNode(nums[i]);
        curr = curr->next;
    }
    return head;
}
void printLL(ListNode* head){
    ListNode* curr = head;
    while (curr != nullptr)
    {
        cout<<curr->val<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
ListNode* reverseKGroup(ListNode* head, int k){
    ListNode* curr = head;
    int count = 0;
    while (curr != nullptr && count != k) {
        curr = curr->next;
        count++;
    }
    if (count == k) {
        curr = reverseKGroup(curr, k);
        while (count-- > 0) {
            ListNode* temp = head->next;
            head->next = curr;
            curr = head;
            head = temp;
        }
        head = curr;
    }
    return head;
}
void rotateRight(ListNode* head, int k) {
    vector<int> samplesspace;
    vector<int> ans;
    ListNode* itr = head;
    while(itr != nullptr){
        samplesspace.emplace_back(itr->val);
        itr = itr->next;
    }
    int n = samplesspace.size();
    for (int i = 0; i < n-k; i++)
    {
        ans.emplace_back(samplesspace[i]);
    }
    reverse(samplesspace.begin(), samplesspace.end());
    for(auto itr : ans){
        samplesspace.emplace_back(itr);
    }  
}
int main() {
vector<int> nums = {1,2,3,4,5};
int k = 2;
ListNode* head = Conver2LL(nums);
// head = reverseKGroup(head, k);
rotateRight(head, k);
// printLL(head);

return 0;
}