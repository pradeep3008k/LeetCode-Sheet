/*
 * @lc app=leetcode id=240 lang=cpp
 *
 * [240] Search a 2D Matrix II
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    // My solution
    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     int m=matrix.size(),n=matrix[0].size();
    //     int left_m=0,right_m=m-1,left_n=0,right_n=n-1;
    //     while(left_m!=right_m or left_n!= right_n){
    //         //let's delete rows from top //if there last element is smaller than the target value
    //         while(left_m<=right_m and matrix[left_m][right_n]<target)left_m++;
    //         if(left_m>right_m)return false;
            
    //         if(matrix[left_m][right_n]==target)return true;
            
    //         //let's delete rows from bottom //if there first values is more thant the target value
    //         while(left_m <= right_m and matrix[right_m][left_n]>target)right_m--;
    //         if(right_m<left_m)return false;
    //         if(matrix[right_m][left_n]==target)return true;

    //         //let's delete columns from left // if there last value is smaller than the target
    //         while(left_n <= right_n and matrix[right_m][left_n]<target)left_n++;
    //         if(left_n>right_n)return false;
    //         if(matrix[right_m][left_n]==target)return true;

    //         //let's delete columns from right // if there first value is greater than the target
    //         while(left_n <= right_n and matrix[left_m][right_n]<target)right_n--;
    //         if(right_n<left_n)return false;
    //         if(matrix[left_m][right_n]==target)return true;
    //     }
    //     if(matrix[left_m][left_n]==target)return true;
    //     return false;
    // }
    // A solution from discussion
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int i = 0;
        int j = a[0].size() - 1;
        while (i < a.size() && j >= 0) {
            if (a[i][j] < target)
                i++;
            else if (a[i][j] > target)
                j--;
            else
                return true;   
        }
        return false;
    }
};
// @lc code=end

