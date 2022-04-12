class Solution {
    bool isSafe(int i,int j,int n,int m){
    if(i<0||i>=n||j<0||j>=m) return false;
    return true;
    }
    int func(int i,int j,int n,int m,vector<vector<int>>& arr){
        vector<int>dx{-1,-1,-1,0,0,1,1,1};
        vector<int>dy{-1,0,1,-1,1,-1,0,1};
        int count=0;
        for(int k=0;k<8;k++){
            int x=i+dx[k];
            int y=j+dy[k];
            if(isSafe(x,y,n,m)){
                if(arr[x][y]==1 || arr[x][y]==-1) count++;
            }
        }
        return count;
    }
public:
    void gameOfLife(vector<vector<int>>& arr) {
       int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x=func(i,j,n,m,arr);
                if(arr[i][j]==0){
                    if(x==3)
                    arr[i][j]=-2;
                }
                else{
                    if(x==2 || x==3) continue;
                    else arr[i][j]=-1;
                }
            }
        }
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
             if(arr[i][j]==-1) arr[i][j]=0;
             if(arr[i][j]==-2) arr[i][j]=1;
            }
       } 
    }
};
