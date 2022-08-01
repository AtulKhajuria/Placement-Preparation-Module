class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s=strs.size();
        int mini=INT_MAX;
        for(int i=0;i<s-1;i++){
            int count=0;
            int j=0;
            for(j=0;j<strs[i].size();j++){
                if(strs[i][j]==strs[i+1][j])
                    count++;
                else break;
            }
            mini=min(count,mini);
        }
            
        string str="";
        if(mini==0)
            return str;
        str=strs[0].substr(0,mini);
        return str;
    }
};