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
    int arr[6] = {13,46,24,52,20,9};
    int mini, temp;

void SelectionSort(){
// Sorting does by swapping minimums at first indexes
   
    for (int i = 0; i < 6; i++)
    {   
        mini = i;
        for (int j = i; j < 6; j++)
        {
            if(arr[j] < arr[mini]){
                mini = j;
            }
            temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
        
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ", ";
    }
}
void BubbleSort(){
// Adjacent elements are swapped such that the maximum 
// pushes to the last
    for (int i = 5; i >=0; i--)
    {
        for (int j = 0; j <= (i-1); j++)
        {
            if (arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ", ";
    }
}
void InsertionSort(){
    for (int i = 0; i < 6; i++)
    {
        int j = i;
        while (j>0 && arr[j-1]>arr[j])
        {
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ", ";
    }    
}
int main() {
InsertionSort();
return 0;
}