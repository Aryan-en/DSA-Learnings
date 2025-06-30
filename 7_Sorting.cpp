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
    // int arr[6] = {13,46,24,52,20,9};
    // int mini, temp;

// void SelectionSort(){
// // Sorting does by swapping minimums at first indexes
   
//     for (int i = 0; i < 6; i++)
//     {   
//         mini = i;
//         for (int j = i; j < 6; j++)
//         {
//             if(arr[j] < arr[mini]){
//                 mini = j;
//             }
//             temp = arr[mini];
//             arr[mini] = arr[i];
//             arr[i] = temp;
//         }
        
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << ", ";
//     }
// }
// void BubbleSort(){
// // Adjacent elements are swapped such that the maximum 
// // pushes to the last
//     for (int i = 5; i >=0; i--)
//     {
//         for (int j = 0; j <= (i-1); j++)
//         {
//             if (arr[j] > arr[j+1]){
//                 temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
        
//     }
    
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << ", ";
//     }
// }
// void InsertionSort(){
//     for (int i = 0; i < 6; i++)
//     {
//         int j = i;
//         while (j>0 && arr[j-1]>arr[j])
//         {
//             temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << ", ";
//     }    
// }

void Merge(vector <int>& arr, int low, int mid, int high){
    int left = mid - low + 1;
    int right = high - mid;

    // Create temp vectors
    vector<int> L(left), R(right);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < left; i++)
        L[i] = arr[low + i];
    for (int j = 0; j < right; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = low;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < left && j < right) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i < left) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < right) {
        arr[k] = R[j];
        j++;
        k++;
    }
    
    
}

void MergeSort(vector<int>& arr, int low, int high){

    if (low >= high)
        return;

    int mid = (low+high)/2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
}

void Display(vector<int>& arr){
for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {3,1,2,4,1,5,2,6,4};
    int n = arr.size();

    cout << "Given vector is \n";
    Display(arr);

    MergeSort(arr, 0, n - 1);

    cout << "\nSorted vector is \n";
    Display(arr);
}