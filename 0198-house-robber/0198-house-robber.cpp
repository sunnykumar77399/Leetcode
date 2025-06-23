class Solution {
public:

    int find(vector<int>& nums,int idx,vector<int>& dp){
        if(idx==nums.size()-1) return dp[idx]=nums[idx];
        if(idx==nums.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];

        int l=nums[idx]+find(nums,idx+2,dp);
        int r=find(nums,idx+1,dp);
        return dp[idx]=max(l,r);
    }

    int rob(vector<int>& nums) {
        int n=nums.size(); 
        vector<int> dp(n+1,-1);
        return find(nums,0,dp);
    }
        
};