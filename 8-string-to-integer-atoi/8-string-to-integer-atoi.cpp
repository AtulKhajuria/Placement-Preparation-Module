class Solution {
public:
    int myAtoi(string s) {
        long int ans=0;
        int i=0;
        int mul=1;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'||s[i]=='+'){
            if(s[i]=='-')
             mul=-1;
             i++;
        }
        while(s[i]>='0'&&s[i]<='9'){
               ans=10*ans + (s[i++]-'0');
                if(ans*mul>=INT_MAX)return INT_MAX;
                if(ans*mul<=INT_MIN)return INT_MIN;
        }
        return ans*mul;
    }
};