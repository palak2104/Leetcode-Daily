class Solution {
public:
    int furthestBuilding(vector<int>& arr, int bricks, int ladders) {
       priority_queue<int,vector<int>,greater<int>>pq;
        int x=ladders;
        int count=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(x==0) break;
            if(arr[i+1]<=arr[i]){
                count++;
                continue;
            }
            else{
                count++;
                pq.push(arr[i+1]-arr[i]);
                x--;
            }
        }
       for(int i=count;i<n-1;i++){
           if(arr[i+1]<=arr[i]){
               count++;
               continue;
           }
           else{
           int x;
           if(pq.empty()){
           x=arr[i+1]-arr[i];  
           }
           else{
           x=pq.top();
           if(arr[i+1]-arr[i]>x){
               pq.pop();
               pq.push(arr[i+1]-arr[i]);
           }
           else x=arr[i+1]-arr[i];
           }
           if(bricks>=x){
               bricks-=x;
               count++;
           }
           else break;
           }
           
       }
        return count;
    }
};
