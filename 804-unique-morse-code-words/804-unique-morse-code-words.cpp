class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string>morses={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string>s;
        for(int i=0;i<words.size();i++)
        {
             string empty="";
           for(int j=0;j<words[i].size();j++)
           {
            empty+=morses[words[i][j]-'a'];
           }
            
          s.insert(empty);
        }
        
       return s.size();
    }
    
}; 