/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */
#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        bool carry=false;
        if(a.length()<b.length())swap(a,b);
        int m=a.size()-1,n=b.size()-1;
        while(m>=0 and n>=0){
            // if(carry and a[m]==1 and b[n]==1) nothing to do
            if(carry and a[m]=='1' and b[n]=='0')a[m]='0';
            // if(carry and a[m]==0 and b[n]==1) nothing to do
            else if(carry and a[m]=='0' and  b[n]=='0'){a[m]='1'; carry=false;}
            else if(carry==false){
                if(a[m]=='1' and b[n]=='1'){a[m]='0';carry=true;}
                else if(a[m]=='0' and b[n]=='1')a[m]='1';
            }
            m--;n--;
        }
        if(carry){
            while(m>=0 and a[m]=='1')a[m--]='0';
            if(m>=0)a[m]='1';
            else a.insert(0,"1");
        }
        return a;
    }
};
// @lc code=end

