class Solution {
public:
    int deleteAndEarn(vector<int>& arr) {
      int mini=INT_MAX;
      int maxi=INT_MIN;
      for(auto it:arr){
          mini=min(mini,it);
          maxi=max(maxi,it);
      }
      vector<int>freq(maxi+1);
      vector<int>dp(maxi+1);
      for(auto it:arr)
      freq[it]++;
      dp[1]=freq[1];
      for(int i=2;i<=maxi;i++){
          dp[i]=max(dp[i-1],i*freq[i]+dp[i-2]);
      }
      return dp[maxi];
    }
};
