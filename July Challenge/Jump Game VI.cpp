class Solution {
public:
    int maxResult(vector<int>&arr, int k) {
        int n=arr.size();
        vector<int>dp(n);
        dp[n-1]=arr[n-1];
        deque<int>dq;
        dq.push_back(n-1);
        for(int i=n-2;i>=0;i--){
            while(dq.size() && dq[0]>i+k){
                dq.pop_front();
            }
            dp[i]=arr[i]+dp[dq[0]];
            while(dq.size() && dp[dq.at(dq.size()-1)]<dp[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        return dp[0];
    }
};
