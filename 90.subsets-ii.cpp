/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int power(int a ,int b){
	        if(b==0)return 1;
	        int num=power(a,b/2);
	        if(b&1)return num*num*a;
	        return num*num;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        ans.push_back(vector<int>());
        sort(nums.begin(),nums.end());
        int counter=1;
        int size=power(2,n);
        // unordered_map<pair<int,int>,bool>ifdone;
        unordered_map<string,bool>mp;
        while(counter<size){
		        //if ith bit of counter is set than 
		        int setbit=1<<(n-1);
		        vector<int>a;
                string b="";
		        int i=0;
		        while(setbit){
		            if(counter & setbit){
		                a.push_back(nums[i]);
                        b+="#";
                        b+=to_string(nums[i]+10);
		            }   
		            i++;
		            setbit>>=1;
		        }
                if(mp.find(b)==mp.end()){
                    ans.push_back(a);
                    mp[b]=true;
                }
		        
		        counter++;
		    }
        return ans;
    }
};
// @lc code=end

