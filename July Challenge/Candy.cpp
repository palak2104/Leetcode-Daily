class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
        vector<int>res(n,1);
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                res[i]=res[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(arr[i]>arr[i+1]){
                res[i]=max(res[i],res[i+1]+1);
            }
        }
        int sum=0;
        for(auto it:res){ cout<<it<<" "; sum+=it;}
        return sum;
    }
};
