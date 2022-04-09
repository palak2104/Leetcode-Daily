class Solution {
    void add(int a,int b,priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>&pq,int k){
        if(pq.size()<k){
            pq.push({a,b});
            return;
        }
        else{
         pq.push({a,b});
         pq.pop();
         return;
        }
    }
public:
    vector<int> topKFrequent(vector<int>&arr, int k) {
        vector<int>res;
        unordered_map<int,int>m;
        for(auto it:arr) m[it]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto it:m) add(it.second,it.first,pq,k);
        while(pq.size()!=0){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
