//Problem Link: https://leetcode.com/problems/wiggle-subsequence/
class Solution {
    int func(int i,int greater,vector<int>&arr,vector<vector<int>>&dp){
        if(i==0) return 1;
        if(dp[i][greater]!=-1) return dp[i][greater];
        int a=-1e8;
        if((arr[i-1]>arr[i] && greater==1) || (arr[i-1]<arr[i] && greater==0)){
            a=1+func(i-1,1-greater,arr,dp);
        }
        int b=func(i-1,greater,arr,dp);
        return dp[i][greater]=max(a,b);
    }
public:
    int wiggleMaxLength(vector<int>&arr) {
        int n=arr.size();
        if(n==1) return 1;
        vector<vector<int>>dp(n,vector<int>(2,-1));
        if(arr[n-2]>=arr[n-1]){
            return func(n-1,1,arr,dp);
        }
        else return func(n-1,0,arr,dp);
    }
};
