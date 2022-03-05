class Solution {
public:
    int deleteAndEarn(vector<int>& arr) {
      vector<int>freq(10001);
      vector<int>dp(10001);
      for(auto it:arr)
      freq[it]++;
      dp[1]=freq[1];
      for(int i=2;i<=10000;i++){
          dp[i]=max(dp[i-1],i*freq[i]+dp[i-2]);
      }
      return dp[10000];
    }
};
