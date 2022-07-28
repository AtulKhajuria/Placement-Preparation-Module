class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        st.push('0');
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]=='{')
                st.push(s[i]);
            else if(s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')'){
                if(st.top()=='(')
                    st.pop();
                else 
                    return false;
            }
            else if(s[i]=='}')
            {
                if(st.top()=='{')
                     st.pop();
                else return false;
            }
            else if(s[i]==']')
            {
                if(st.top()=='[')
                     st.pop();
                else 
                   return false;
            }
        }
        if(st.top()=='0')
            return true;
         return false;
    }
};