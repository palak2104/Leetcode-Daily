class Solution {
    bool func(int node,vector<int>&vis,vector<int>&col,vector<vector<int>>& graph){
        vis[node]=1;
        for(auto it:graph[node]){
            if(!vis[it]){
                col[it]=1-col[node];
                if(!func(it,vis,col,graph)) return false;
            }
            else if(col[it]==col[node]){
                return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
       int n=graph.size();
       vector<int>col(n);
        vector<int>vis(n,0);
        col[0]=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(!func(i,vis,col,graph)) return false;
            }
        }
        return true;
    }
};
