/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)return 0;
        bool arr[n];
        memset(arr,false,sizeof(arr));
        for(int i=2;i<=sqrt(n-1);i++){
            if(arr[i]==false){
                for(int j=i+i;j<n;j+=i)arr[j]=true;
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(!arr[i])count++;
        }
        return count;
    }
};
// @lc code=end

