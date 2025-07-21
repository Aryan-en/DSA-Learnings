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
// void predictTheWinner(vector<int>& nums) {
//     int p1_score = 0, p2_score = 0;

// }
// void targetIndices(vector<int>& nums, int target) {
//     sort(nums.begin(), nums.end());
//     vector <int> ans;
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == target)
//         {
//             ans.emplace_back(i);
//         }
        
//     }
    
    
//     for(auto itr : ans){
//         cout << itr << endl;
//     }
// }
// void searchMatrix(vector<vector<int>>& matrix, int target) {
// int n = matrix.size();
// int m = matrix[0].size();
// vector<int> arr;
// int largest = INT_MIN;
// int largest_i = INT_MIN, largest_j = INT_MIN;
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         if (matrix[i][j] > largest)
//         {
//             largest = matrix[i][j];
//             largest_i = i;
//             largest_j = j;
//         }
        
//     }
// }
// cout << largest_i << " " << largest_j << " largest = " << largest;
// }
int maxElem(vector <vector<int>> &mat,int n, int m, int mid){
    int largest = INT_MIN;
    int ind = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mat[i][mid] > largest)
        {   
            largest = mat[i][mid];
            ind = i;
        }
        
    }
    return ind;
}
vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    int low = 0, high = m-1;
    while (low <= high)
    {
        int mid = (low+high)/2;
        int row = maxElem(mat, n, m, mid);
        int left = mid-1 >= 0 ? mat[row][mid-1] : -1;
        int right = mid-1 < 0 ? mat[row][mid+1] : -1;
        if (mat[row][mid] > left && mat[row][mid] > right)
        {
            return {row, mid};
        }
        else if(mat[row][mid] < left){
            high = mid - 1;
        }
        else{
            low = mid+1;
        }
    }
    return {-1,-1};
}
int main() {
vector<vector<int>> matrix = {{1,4},
                              {3,2}};
findPeakGrid(matrix);
return 0;
}