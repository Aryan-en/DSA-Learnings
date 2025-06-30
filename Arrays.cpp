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
int partition(vector <int> &arr, int low, int high){
    int pivot = arr[high];
    int i = (low-1);
    for (int j = low; j <= high-1; j++)
    {
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], pivot);
    return (i+1);
}
void QuickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int pI = partition(arr, low, high);
        QuickSort(arr, low, pI--);
        QuickSort(arr, pI++, high);
    }
}
int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    cout << "Original Array :";
    for(auto it : arr){
        cout << it << " ";
    }
    
    QuickSort(arr, 0, arr.size()-1);

    cout << endl;
    cout << "Sorted Array :";
    for(auto it : arr){
        cout << it << " ";
    }
return 0;
}