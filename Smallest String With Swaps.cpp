class Solution {
    void dfs(int i,vector<char>&str,vector<int>&temp,string s,vector<int>arr[],vector<int>&vis){
        vis[i]=1;
        temp.push_back(i);
        str.push_back(s[i]);
        for(auto it:arr[i]){
            if(!vis[it]){
             dfs(it,str,temp,s,arr,vis);   
            }
        }
    }
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.length();
        vector<int>arr[n];
        for(auto it:pairs){
            arr[it[0]].push_back(it[1]);
            arr[it[1]].push_back(it[0]);
        }
        string res;
        res.resize(n);
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vector<char>str;
                vector<int>temp;
                dfs(i,str,temp,s,arr,vis);
                sort(str.begin(),str.end());
                sort(temp.begin(),temp.end());
                int j=0;
                for(auto it:temp){
                    res[it]=str[j++];
                }
            }
        }
        return res;
    }
};
