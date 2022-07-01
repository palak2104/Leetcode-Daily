//PROBLEM LINK: https://leetcode.com/problems/maximum-units-on-a-truck/
class Solution {
    static bool compare(vector<int>a,vector<int>b){
        return a[1]>=b[1];
    }
public:
    int maximumUnits(vector<vector<int>>&arr, int truckSize) {
        sort(arr.begin(),arr.end(),compare);
        int sum=0;
        for(auto it:arr){
            if(it[0]<=truckSize){
                sum+=(it[0]*it[1]);
                truckSize-=it[0];
            }
            else{
                sum+=(truckSize*it[1]);
                break;
            }
        }
        return sum;
    }
};
