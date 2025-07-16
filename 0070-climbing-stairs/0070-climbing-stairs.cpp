class Solution {
public:
    int func(int n,vector<int>& dp){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=func(n-1,dp)+func(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return func(n,dp);
    }
    // ------------tabulation methoad------------------------
    
    /*int climbStairs(int n){
        if(n<=2) return n;
        int prev2=1,prev=2,curr;
        for(int i=2;i<n;i++){
            curr=prev+prev2;
            prev2=prev;
            prev=curr;
        }
        return curr;
    }*/
};