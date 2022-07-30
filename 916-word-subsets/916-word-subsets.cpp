class Solution {
public:
    bool compWords(map<char,int>mp,string s){
        if(s=="")
            return false;
        map<char,int>wordMap;
        for(int i=0;i<s.size();i++){
            wordMap[s[i]]++;
        }
        for(auto i:mp){
            if(wordMap.find(i.first)==mp.end())
                return false;
            if(wordMap[i.first]<i.second)
                return false;
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;
        map<char,int>mp;
        for(int i=0;i<words2.size();i++){
           map<char,int>temp;
            for(int j=0;j<words2[i].size();j++){
                temp[words2[i][j]]++;
                if(mp.find(words2[i][j])==mp.end())
                    mp[words2[i][j]]++;
                else{
                    if(mp[words2[i][j]]<temp[words2[i][j]])
                        mp[words2[i][j]]=temp[words2[i][j]];
                }
            }
        }
        for(int i=0;i<words1.size();i++){
            bool var=compWords(mp,words1[i]);
            if(var)
                ans.push_back(words1[i]);
        }
        return ans;
    }
};