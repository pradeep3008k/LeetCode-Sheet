/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    /*
    My solution
    int maxProfit(vector<int>& prices) {
        //lets' store all the local max and local min in a stack
        int profit=0;
        stack<pair<int,int>>st;
        int n=prices.size();
        if(n==1)return 0;
        if(prices[0]>=prices[1])st.push({prices[0],1});
        if(prices[0]<=prices[1])st.push({prices[0],-1});
        for(int i=1;i<n-1;i++){
            if(prices[i]>=prices[i+1] and prices[i]>=prices[i-1])st.push({prices[i],1});
            if(prices[i]<=prices[i+1] and prices[i]<=prices[i-1])st.push({prices[i],-1});
        }
        if(prices[n-1]>=prices[n-2])st.push({prices[n-1],1});
        if(prices[n-1]<=prices[n-2])st.push({prices[n-1],-1});
        int global_min=-1,global_max=-1;
        while(!st.empty()){
            pair<int,int>curr=st.top();st.pop();
            if(curr.second==-1){
                if(global_min==-1)global_min=curr.first;
                else global_min=min(global_min, curr.first);
            }
            else if(curr.second==1 and curr.first>global_max){
                global_max=curr.first;
                global_min=-1;
            }
            if(global_min!=-1 and global_max!=-1)profit=max(profit,global_max-global_min);
        }
        return profit;
    }*/
    
    // Solution from discussions
    /*
    Using kadane algorithm
    int maxProfit(vector<int>& prices) {
        int local_max=0,global_max=0;
        for(int i=1;i<prices.size();i++){
            local_max=max(0,local_max+=prices[i]-prices[i-1]);
            global_max=max(local_max,global_max);
        }
        return global_max;
    }*/
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX,ans=0;
        for(int i=0;i<prices.size();i++){
            min_price=min(min_price,prices[i]);
            ans=max(ans,prices[i]-min_price);
        }
        return ans;
    }
};
// @lc code=end

