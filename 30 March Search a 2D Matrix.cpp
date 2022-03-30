class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int x) {
    int n=arr.size();
    int m=arr[0].size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid][0]==x){
            ans=mid;
            break;
        }
        else if(arr[mid][0]<x){
            low=mid+1;
            ans=mid;
        }
        else if(arr[mid][0]>x){
            high=mid-1;
        }
    }
    if(ans==-1) return false;
    low=0;
    high=m-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[ans][mid]==x) return true;
        else if(arr[ans][mid]<x) low=mid+1;
        else high=mid-1;
    }
    return false;
    }
};
