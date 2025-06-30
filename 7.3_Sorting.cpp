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
using namespace std;
//Quick Sort
// vector <int> sortedarr;
// int partition(vector <int> arr, int low, int high){
//     int pivot = arr[low];
//     int i = low;
//     int j = high;
//     while(i<j){
//         while(arr[i] <= pivot && i <= (high-1)){
//             i++;
//         }
//         while(arr[j] >= pivot && j >= (low+1)){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[low], arr[j]);
//     return j;
// }
// void qs(vector <int> arr, int low, int high){
//     if (low < high){
//         int pIndex = partition(arr, low, high);
//         qs(arr, low, pIndex--);
//         qs(arr, pIndex++, high);
//     }
// }
// void QuickSort(vector <int> arr){
//   qs(arr, 0, arr.size()-1);
//   for(auto itr : arr){
//     sortedarr.emplace_back(itr);
//   }
// }
// int main() {
// vector <int> arey = {2,1,3,4,6,5,7,8};
// QuickSort(arey);
// for(auto itr : sortedarr){
//     cout << itr << ", ";
// }
// return 0;
// }
int partition(vector<int> &vec, int low, int high) {

    // Selecting last element as the pivot
    int pivot = vec[high];

    // Index of elemment just before the last element
    // It is used for swapping
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {

        // If current element is smaller than or
        // equal to pivot
        if (vec[j] <= pivot) {
            i++;
            swap(vec[i], vec[j]);
        }
    }

    // Put pivot to its position
    swap(vec[i + 1], vec[high]);

    // Return the point of partition
    return (i + 1);
}

void quickSort(vector<int> &vec, int low, int high) {

    // Base case: This part will be executed till the starting
    // index low is lesser than the ending index high
    if (low < high) {

        // pi is Partitioning Index, arr[p] is now at
        // right place
        int pi = partition(vec, low, high);

        // Separately sort elements before and after the
        // Partition Index pi
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}

int main() {
    vector<int> vec = {10, 7, 8, 9, 1, 5};
    int n = vec.size();
	
  	// Calling quicksort for the vector vec
    quickSort(vec, 0, n - 1);

    for (auto i : vec) {
        cout << i << " ";
    }
    return 0;
}