class Solution {
public:
    int numberOfArithmeticSlices(vector<int>&arr) {
     int n=arr.size();
     vector<int>dp(n,0);
     for(int i=2;i<n;i++){
         if(arr[i]-arr[i-1]==arr[i-1]-arr[i-2]){
             dp[i]=dp[i-1]+1;
         }
     }
     int sum=0;
     for(auto it:dp) sum+=it;
    return sum;
    }
};
