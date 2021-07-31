/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    //Approach 1 O(NKlogK)
    // vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     map<string,vector<string>>mp;
    //     for(auto it: strs){
    //         //let's sort it
    //         string x=it;
    //         sort(x.begin(),x.end());
    //         mp[x].push_back(it);
    //     }
    //     vector<vector<string>>ans;
    //     for(auto it: mp){
    //         ans.push_back(it.second);
    //     }
    //     return ans;
    // }
    //Approach 2 O(NK)
    // vector<vector<string>> groupAnagrams(vector<string>& strs){
    //     map<string,vector<string>>mp;
    //     for(int i=0;i<strs.size();i++){
    //         vector<int>count(26,0);
    //         for(int j=0;j<strs[i].size();j++){
    //             count[strs[i][j]-'a']++;
    //         }
    //         string s="";
    //         for(int i=0;i<26;i++){
    //             s+=string((char)(65+i),count[i]);
    //         }
    //         mp[s].push_back(strs[i]);
    //     }
    //     vector<vector<string>>ans;
    //     for(auto it: mp){
    //         ans.push_back(it.second);
    //     }
    //     return ans;
    // }
    //Approach 3 o(NK)
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            vector<int>count(26,0);
            for(int j=0;j<strs[i].size();j++){
                count[strs[i][j]-'a']++;
            }
            string s="";
            for(int i=0;i<26;i++){
                s+="#";
                s+=to_string(count[i]);
            }
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
// @lc code=end

