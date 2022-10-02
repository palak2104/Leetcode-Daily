class Solution {
    int func(int n,int k,int target,vector<vector<int>>&dp){
        if(n==0){
        if(target==0) return 1;
        return 0;
        }
        if(dp[n][target]!=-1) return dp[n][target];
        int res=0;
        int mod=1e9+7;
        for(int j=1;j<=k;j++){
        if(target-j>=0)
        res=(res+func(n-1,k,target-j,dp))%mod;
        }
        return dp[n][target]=res;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
    vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
    return func(n,k,target,dp);
    }
};
