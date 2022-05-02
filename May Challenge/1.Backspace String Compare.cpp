class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>a,b;
       for(auto &it:s){
           if(it=='#'){
           if(!a.empty())
            a.pop();
           }else a.push(it);
       }
       for(auto &it:t){
           if(it=='#'){
           if(!b.empty())
            b.pop();
           }else b.push(it);
       }
         return (a==b);
    }
};
