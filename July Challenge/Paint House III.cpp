class Solution {
int func(int i,int ct, int prev,int m,int n,int target,vector<int>&house,vector<vector<int>>& cost,vector<vector<vector<int>>>&dp){
        if(i==house.size()){
            if(ct==target) return 0;
            else return 1e8;
        }
        if(ct>target) return 1e8;
        if(dp[i][prev][ct]!=-1) return dp[i][prev][ct];
        int mini=1e8;
        if(house[i]){
            return dp[i][prev][ct]=func(i+1,ct+(prev!=house[i]),house[i],m,n,target,house,cost,dp);
        }
        else{
            for(int j=0;j<n;j++){
            mini=min(mini,cost[i][j]+func(i+1,ct+(prev!=j+1),j+1,m,n,target,house,cost,dp));
            }
        }
    return dp[i][prev][ct]=mini;
    }
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n+1,vector<int>(target+1,-1)));
        int temp=func(0,0,0,m,n,target,houses,cost,dp);
        return temp==1e8?-1:temp;
    }
};
