class Solution {
double dfs(string a,string b,map<string,vector<pair<string,double>>>&arr,map<string,int>&vis){
    vis[a]=1;
    for(auto it:arr[a]){
        if(vis.find(it.first)==vis.end()){
            if(it.first==b){
                return it.second;
            }
            else{
                double temp=dfs(it.first,b,arr,vis);
                if(temp!=-1){
                    double x=temp*it.second;
                    return x;
                }
            }
        }
    }
    return -1;
}
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
      map<string,vector<pair<string,double>>>arr;
      int n=equations.size();
       for(int i=0;i<n;i++){
           double val=values[i];
           double valr=(double) 1.00000/val;
           string a=equations[i][0];
           string b=equations[i][1];
           arr[a].push_back({b,val});
           arr[b].push_back({a,valr});
       }
    vector<double>res;
    for(auto it:queries){
        string a=it[0];
        string b=it[1];
        if(arr.find(a)==arr.end() || arr.find(b)==arr.end()){
            res.push_back(-1.00000);
        }
        else if(a==b){
           res.push_back(1.00000); 
        }
        else{
            map<string,int>vis;
            double ans=dfs(a,b,arr,vis);
            res.push_back(ans);
        }
    }
    return res;
    }
};


