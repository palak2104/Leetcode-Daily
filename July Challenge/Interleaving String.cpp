class Solution {
    int func(string s1, string s2, string s3,int p1,int p2,int p3,vector<vector<int>>&dp){
        if(p1<0 && p2<0 && p3<0) return 1;
        if(p1>=0 && p2>=0 &&dp[p1][p2]!=-1) return dp[p1][p2];
        if(p1>=0 && p2>=0 && s1[p1]==s3[p3] && s2[p2]==s3[p3])
        return dp[p1][p2]=func(s1,s2,s3,p1-1,p2,p3-1,dp)|| func(s1,s2,s3,p1,p2-1,p3-1,dp);
        if(p1>=0 && s1[p1]==s3[p3]){
               return func(s1,s2,s3,p1-1,p2,p3-1,dp); 
            }
        
        if(p2>=0 && s2[p2]==s3[p3]){
              return func(s1,s2,s3,p1,p2-1,p3-1,dp); 
        }
        return 0;
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.length();
        int m=s2.length();
        int o=s3.length();
        if(m+n!=o) return false;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return func(s1,s2,s3,n-1,m-1,o-1,dp);
    }
};
