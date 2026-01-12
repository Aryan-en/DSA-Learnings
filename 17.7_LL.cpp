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
    ListNode(int x) : val(x), next(NULL) {}
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
    
}
int main() {
vector<int> nums = {3,2,0,-4}; 
ListNode* head = convert2LL(nums); 
cout << hasCycle(head) << endl;
return 0;
}