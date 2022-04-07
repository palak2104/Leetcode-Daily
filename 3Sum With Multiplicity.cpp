class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
      map<int,int>m;
      for(auto it:arr) m[it]++;
      int sum=0;
      long long mod=1e9+7;
      for(auto i:m){
          for(auto j:m){
              int x=i.first;
              int y=j.first;
              int k=target-x-y;
              if(m[k]==0) continue;
              if(x>y || y>k || x>k) continue;
              //cout<<x<<" "<<y<<" "<<k<<endl;
              int a=m[x];
              int b=m[y];
              int c=m[k];
              if(x==y && y==k){
                  if(m[x]<3) continue;
                  long long temp=(a*(a-1)*(a-2))/6;
                  sum=(sum+temp)%mod;
              }
              else if(x==y && y!=k){
                 if(m[x]<2) continue;
                  long long temp=((a*(a-1))/2) * c;
                  sum=(sum+temp)%mod;
              }
              else if(x!=y && y==k){
                  if(m[y]<2) continue;
                  long long temp=((b*(b-1))/2)*a;
                  sum=(sum+temp)%mod;
              }
              else if(x<=y && y<=k){
                  long long temp=a*b*c;
                  sum=(sum+temp)%mod;
              }
          }
      }
        return sum;
    }
};
