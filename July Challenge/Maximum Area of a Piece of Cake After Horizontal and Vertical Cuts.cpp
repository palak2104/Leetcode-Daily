//https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        long long int a=INT_MIN,b=INT_MIN;
        int mod=1e9+7;
        a=max(a,(long long) hc[0]-0);
        b=max(b,(long long) vc[0]-0);
        for(int i=1;i<hc.size();i++){
            a=max(a,(long long) hc[i]-hc[i-1]);
        }
        for(int i=1;i<vc.size();i++){
            b=max(b,(long long) vc[i]-vc[i-1]);
        }
        a=max(a,(long long) h-hc[hc.size()-1]);
        b=max(b,(long long) w-vc[vc.size()-1]);
        a=a%mod;
        b=b%mod;
        long long temp=a*b;
        int res=temp%mod;
        return res ;
    }
};
