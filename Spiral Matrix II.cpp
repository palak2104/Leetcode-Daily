class Solution {
void func(int lowr,int highr,int lowc,int highc,vector<vector<int>>&arr, int &k){
    
    int i, j; 
    i=lowr;
    for(int j=lowr;j<=highr; j++)
        arr[i][j]=k++;
    j=highr;
    for(int i=lowc;i<=highc; i++)
        arr[i][j]=k++;
    i=highr;
    for(j=highr;j>=lowr; j--) 
        arr[i][j]=k++;
     j=lowr;
    for(int i=highc;i>=lowc; i--)
        arr[i][j]=k++;
}
public:
    vector<vector<int>> generateMatrix(int n) {
        int lowr=0,highr=n-1;
        int lowc=1,highc=n-2;
        int i=1;
        vector<vector<int>>arr(n,vector<int>(n,0)); 
        while(lowr<highr){
        func(lowr,highr,lowc,highc,arr,i);
        lowr++; highr--; lowc++; highc--; 
        }
        arr[lowr][highr]=n*n;
        return arr; 
    }
};
