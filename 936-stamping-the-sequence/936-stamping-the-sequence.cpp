class Solution { 
public: 
    int count=0;
    string tarGet,Stamp;
    
    bool isReplaceable(int pos){
        for(int i=0;i<Stamp.size();i++){
            if(tarGet[i+pos]!='?' and tarGet[i+pos]!=Stamp[i]){
                return false;
            }
        }
        return true;
    } 
    void replace (int pos){
        for(int i=0;i<Stamp.size();i++){
            if(tarGet[i+pos]!='?'){
                tarGet[i+pos]='?';
                count++;
            }
        }
    }
    vector<int> movesToStamp(string stamp, string target) {
        vector<int>ans,a;
        tarGet=target;
        Stamp=stamp;
         
        int sl=stamp.size();
        int tl=target.size();
        vector<bool>visited(tl+1,false);
        //cout<<tarGet<<endl;
        while(count!=target.size()){
            bool isChanged=false;
            for(int i=0;i<=tl-sl;i++){
                if(!visited[i] and isReplaceable(i)){
                    visited[i]=true;
                    replace(i);
                    isChanged=true;
                    ans.push_back(i);
                    if(count==tl){
                        break;
                    }
                }
            }
            if(!isChanged){
                return a;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans; 
    }   
};