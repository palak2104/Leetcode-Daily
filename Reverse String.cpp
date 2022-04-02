//https://leetcode.com/problems/reverse-string/
class Solution {
public:
    void reverseString(vector<char>& arr) {
      int low=0;
      int high=arr.size()-1;
      while(low<=high){
          swap(arr[low],arr[high]);
          low++;
          high--;
      }
    }
};
