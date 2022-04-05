class Solution {
public:
    int maxArea(vector<int>& arr) {
        int area=INT_MIN;
        int low=0;
        int high=arr.size()-1;
        while(low<high){
            area=max(area,min(arr[low],arr[high])*(high-low));
            if(arr[low]<arr[high])
            low++;
            else high--;
        }
        return area;
    }
};
