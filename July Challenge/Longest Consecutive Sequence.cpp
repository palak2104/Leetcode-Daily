class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0) return 0;
        unordered_map<int,int>m;
        for(auto it:arr) m[it]=1;
        int count=1;
        int maxCount=INT_MIN;
        for(int i=0;i<arr.size();i++){
            int j=arr[i];
            if(m[j+1]) continue;
            count=0;
            while(m[j]){
                count++;
                j--;
            }
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};
