class Solution {
public:
    int calPoints(vector<string>& arr) {
        int res=0;
        stack<int>st;
        for(auto it:arr){
            if(it!="C" && it!="D" && it!="+"){
             st.push(stoi(it));  
            }
            else if(it=="C"){
                st.pop();
            }
            else if(it=="D"){
                int temp=st.top();
                st.push(2*temp);
            }
            else if(it=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
        }
        while(st.size()!=0){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};
