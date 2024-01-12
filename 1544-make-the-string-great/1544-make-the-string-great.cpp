class Solution {
public:
    bool matching(char a,char b){
        return ((a-32==b) || (a+32==b));
    }
    string makeGood(string s) {
      stack<char> st;
        string r;
        for(int i=0;i<s.length();i++){
           if(st.empty()){
               st.push(s[i]);
               continue;
           }
            if(matching(st.top(),s[i])==true){
                st.pop();
            }
            else{
                 st.push(s[i]);
            }
            
        }
        while(!st.empty()){
            r=st.top()+r;
            st.pop();
        }
        return r;
    
    }

};