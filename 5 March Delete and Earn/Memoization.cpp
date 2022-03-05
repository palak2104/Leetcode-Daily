class Solution {
    int func(int i,int maxi,vector<int>freq,vector<int>&dp){
        if(i>maxi) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick=i*freq[i]+func(i+2,maxi,freq,dp);
        int npick=func(i+1,maxi,freq,dp);
        return dp[i]=max(pick,npick);
    }
public:
    int deleteAndEarn(vector<int>& arr) {
      int mini=INT_MAX;
      int maxi=INT_MIN;
      for(auto it:arr){
          mini=min(mini,it);
          maxi=max(maxi,it);
      }
      vector<int>freq(maxi+1);
      vector<int>dp(maxi+1,-1);
      for(auto it:arr)
      freq[it]++;
      return func(0,maxi,freq,dp);
    }
};
