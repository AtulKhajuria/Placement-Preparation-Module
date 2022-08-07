class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        for(int i=1;i<n;i++){
            int cnt=1;
            string f="";
            int j=0;
            while(j++<s.length()){
                if(s[j-1]!=s[j]){
                    f=f+to_string(cnt)+s[j-1];
                    cnt=1;
                }
                else cnt++;
            }
            s=f;
        }
        return s;
    }
};