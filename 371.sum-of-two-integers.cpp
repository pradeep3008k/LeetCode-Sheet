/*
 * @lc app=leetcode id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int getSum(int a, int b) {
        string a1= bitset<32> (a).to_string();
        string b1= bitset<32> (b).to_string();
        long long ans=0,i=31,exp=0,cin=0,c_out=0,ain,bin;
        while(i>=0){
            ain=a1[i]-'0';
            bin=b1[i]-'0';
            ans+=((ain^bin)^cin)*pow(2,exp);
            c_out=((ain^bin)&&cin) || (ain&&bin);
            cin=c_out;
            i--;
            exp++;
        }
        if(cin==1 and a>0 and b>0)ans+=pow(2,exp);
        return ans;
    }
};
// @lc code=end

