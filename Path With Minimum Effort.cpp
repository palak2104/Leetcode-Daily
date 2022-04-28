class Solution {
bool isFeasible(int i,int j,int mid,int n,int m,vector<vector<int>>& vis,vector<vector<int>>& h){
      if(i==n-1 && j==m-1) return true;
      vis[i][j]=1;
      vector<int>dx{-1,0,1,0};
      vector<int>dy{0,1,0,-1};
      bool op=false;
      for(int k=0;k<4;k++){
          int x=i+dx[k];
          int y=j+dy[k];
          if(x<0 || x==n || y<0 || y==m) continue;
          if(abs(h[i][j]-h[x][y])<=mid && !vis[x][y]){
              op=op||isFeasible(x,y,mid,n,m,vis,h);
          }
      }
     return op; 
}
public:
    int minimumEffortPath(vector<vector<int>>&h) {
        int n=h.size();
        int m=h[0].size();
        int low=0;
        int high=INT_MAX;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            vector<vector<int>>vis(n,vector<int>(m,0));
            if(isFeasible(0,0,mid,n,m,vis,h)){
              ans=min(ans,mid);
              high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
