class Solution {
public:
    vector<int>found_pattern(string pattern){
        if(pattern.size()==0)return {};
        unordered_map<char,int>mp;
        vector<int>v;
        int k=1;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i])==mp.end()){
                v.push_back(k);
                mp[pattern[i]]=k++;
            }
            else
                v.push_back(mp[pattern[i]]);;
        }
        return v;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<int>v;
        v=found_pattern(pattern);
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            vector<int>check=found_pattern(words[i]);
            if(check==v)
                ans.push_back(words[i]);
        }
        return ans;
    }
};