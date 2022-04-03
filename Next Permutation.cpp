class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                int ele;
                int diff=INT_MAX;
                for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i] && arr[j]-arr[i]<diff){
                        diff=arr[j]-arr[i];
                        ele=j;
                }
                }
                swap(arr[i],arr[ele]);
                sort(arr.begin()+i+1,arr.end());
                return;
            }
        }
        reverse(arr.begin(),arr.end());
    }
};
//https://leetcode.com/problems/next-permutation/
