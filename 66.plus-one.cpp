/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]<9)digits[n-1]++;
        else{
            //find the first digit that has value less than 9
            n--;
            while(n>=0 and digits[n]==9)digits[n--]=0;
            if(n>=0)digits[n]++;
            else digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
// @lc code=end

