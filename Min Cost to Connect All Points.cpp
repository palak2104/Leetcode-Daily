class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int count=0;
       for(auto &it:points){
           it.push_back(++count);
       }
        int n=points.size();
        vector<pair<int,int>>arr[n+1];
        for(auto it:points){
        int j=it[2];
        for(auto i:points){
            if(i!=it){
            int a=abs(it[0]-i[0]);
            int b=abs(it[1]-i[1]);
            int k=i[2];
            int d=a+b;
            arr[j].push_back({k,d});
            }
        }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,1});
        unordered_map<int,int>vis;
        int cost=0;
        while(!pq.empty()&&vis.size()<=n){
        int node=pq.top().second;
        int num=pq.top().first;
        pq.pop();
        if(vis[node]) continue;
        cost+=num;
        vis[node]=1;
        for(auto it:arr[node]){
            if(vis[it.first]==0){
            pq.push({it.second,it.first});
            }
        }
        }
        return cost;
    }
};
