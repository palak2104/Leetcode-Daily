class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        while(low<high){
            int a=arr[low];
            int b=arr[high];
            if(a%2==0 && b%2!=0){
                low++;
                high--;
            }
            else if(a%2!=0 && b%2==0){
                swap(arr[low],arr[high]);
                low++;
                high--;
            }
            else if(a%2==0) low++;
            else high--;
        }
        return arr;
    }
};
