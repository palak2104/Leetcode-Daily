class Solution {
    int func(int i,string s,int n,vector<int>&dp){
    if(i==n) return 1;
    if(s[i]=='0') return 0;
    if(dp[i]!=-1) return dp[i];
    int res=func(i+1,s,n,dp);
    if(i<n-1 && (s[i]=='1' || (s[i]=='2' && s[i+1]<'7'))) res+=func(i+2,s,n,dp);
    return dp[i]=res;
    }
public:
    int numDecodings(string s) {
    if(s=="0") return 0;
    int n=s.size();
    vector<int>dp(n+1,-1);
    return func(0,s,n,dp);
    }
};
