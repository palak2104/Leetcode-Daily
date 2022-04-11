class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& arr, int k) {
    int m=arr.size();
    int n=arr[0].size();
    for(int x=0;x<k;x++){
           int prev=-1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                   int temp=arr[i][j];
                arr[i][j]=prev;
                prev=temp;
                    
                }
            }
        arr[0][0]=prev; 
    }
        return arr; 
        }
};
