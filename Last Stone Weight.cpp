class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
       priority_queue<int>pq;
       for(auto it:arr)
       pq.push(it);
       while(pq.size()>1){
           int a=pq.top();
           pq.pop();
           int b=pq.top();
           pq.pop();
           if(a==b) continue;
           int temp;
           if(a>b){
               temp=a-b;
               pq.push(temp);
           }
       }
    if(!pq.size()) return 0;
    else return pq.top();
    }
};
//https://leetcode.com/problems/last-stone-weight/
