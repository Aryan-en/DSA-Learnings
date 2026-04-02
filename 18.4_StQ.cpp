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
#include <queue>
using namespace std;
// void maxSlidingWindow(vector<int>& nums, int k) {
//   // Brute Force
//     // int n = nums.size();
//     // int p1 = 0, p2 = p1 + k - 1;
//     // vector <vector<int>> ans;
//     // vector <int> maxElem;
//     // while (p2 != n-1)
//     // {
//     //     vector <int> test;
//     //     for (int i = 0; i < k; i++)
//     //     {
//     //         test.emplace_back(nums[p1+i]);
//     //     }
//     //     int maxELem = max(maxELem, *max_element(test.begin(), test.end()));
//     //     maxElem.emplace_back(maxELem);
//     //     ans.emplace_back(test);
//     //     p1++;
//     // }
//     // int index = 0, ME = INT_MIN;
//     // for (int i = 0; i < maxElem.size(); i++)
//     // {
//     //     if (maxElem[i] > ME)
//     //     {
//     //         ME = maxElem[i];
//     //         index = i;
//     //     }
//     // }
//     // for(auto ir : ans[index])
//     // {
//     //     cout << ir << " ";
//     // }
//     
// }

// class StockSpanner {
// public:
//     stack <pair<int, int>> st;
//     int ind = -1;
//     StockSpanner() {
//         ind = -1;
//     }
//     int next(int price) {
//      ind++;
//      while(!st.empty() && st.top().first <= price)
//      {
//          st.pop();
//      }
//      int ans = ind - (st.empty() ? -1 : st.top().second);
//      st.push({price, ind});
//         return ans;
//     }
//         
// };

// LFU Cache!!

// #include <unordered_map>
// using namespace std;
// 
// class LFUCache {
// private:
// 
//     struct Node {
//         int key, value, freq;
//         Node* prev;
//         Node* next;
// 
//         Node(int k,int v) {
//             key = k;
//             value = v;
//             freq = 1;
//             prev = next = nullptr;
//         }
//     };
// 
//     struct DLL {
//         Node* head;
//         Node* tail;
//         int size;
// 
//         DLL() {
//             head = new Node(0,0);
//             tail = new Node(0,0);
//             head->next = tail;
//             tail->prev = head;
//             size = 0;
//         }
// 
//         void add(Node* node) {
//             node->prev = head;
//             node->next = head->next;
//             head->next->prev = node;
//             head->next = node;
//             size++;
//         }
// 
//         void remove(Node* node) {
//             node->prev->next = node->next;
//             node->next->prev = node->prev;
//             size--;
//         }
// 
//         Node* removeLast() {
//             if(size > 0) {
//                 Node* node = tail->prev;
//                 remove(node);
//                 return node;
//             }
//             return nullptr;
//         }
//     };
// 
//     unordered_map<int,Node*> keyMap;
//     unordered_map<int,DLL*> freqMap;
// 
//     int capacity;
//     int minFreq;
// 
// public:
// 
//     LFUCache(int capacity) {
//         this->capacity = capacity;
//         minFreq = 0;
//     }
// 
//     int get(int key) {
// 
//         if(!keyMap.count(key)) return -1;
// 
//         Node* node = keyMap[key];
//         update(node);
//         return node->value;
//     }
// 
//     void put(int key,int value) {
// 
//         if(capacity == 0) return;
// 
//         if(keyMap.count(key)) {
//             Node* node = keyMap[key];
//             node->value = value;
//             update(node);
//             return;
//         }
// 
//         if(keyMap.size() == capacity) {
//             DLL* list = freqMap[minFreq];
//             Node* removed = list->removeLast();
//             keyMap.erase(removed->key);
//         }
// 
//         Node* node = new Node(key,value);
//         keyMap[key] = node;
// 
//         minFreq = 1;
// 
//         if(!freqMap.count(1))
//             freqMap[1] = new DLL();
// 
//         freqMap[1]->add(node);
//     }
// 
// private:
// 
//     void update(Node* node) {
// 
//         int freq = node->freq;
//         DLL* list = freqMap[freq];
// 
//         list->remove(node);
// 
//         if(freq == minFreq && list->size == 0)
//             minFreq++;
// 
//         node->freq++;
// 
//         if(!freqMap.count(node->freq))
//             freqMap[node->freq] = new DLL();
// 
//         freqMap[node->freq]->add(node);
//     }
// };
int main() {

return 0;
}