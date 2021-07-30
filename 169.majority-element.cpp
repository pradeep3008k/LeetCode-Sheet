/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                ans=nums[i];
                count++;
            }
            else if(nums[i]==ans)count++;
            else count--;
        }
        return ans;
    }
};
// @lc code=end

