class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq; 
    int x;
    KthLargest(int k, vector<int>& arr) {
        x=k;
        for(auto it:arr) add(it);
    }
    
    int add(int val) {
       if(pq.size()<x){
           pq.push(val);
       }
       else{
           pq.push(val);
           pq.pop();
       }
        return pq.top();
    }
};
