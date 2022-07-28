class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1,mp2;
        if(s.size()!=t.size())
            return false;
        int i=0;
        while(i<s.size()){
            mp1[s[i]]++;
            mp2[t[i]]++;
            i++;
        }
        for(int i=0;i<s.size();i++){
            if(mp1[s[i]]!=mp2[s[i]])
                return false;
        }
        return true;
    }
};