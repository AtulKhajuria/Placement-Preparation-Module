class Solution {
public:
    int fact [9] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320};
    
    string getPermutation(int n, int k) 
{            
        string seq;
        for(int i = 1; i<=n; i++)
            seq.push_back('0'+i); 
        
        string ans;        
        k--; 
        if(k==0)
            return seq;
        
        while(k > 0 && n > 1) 
        {
            int index = k/fact[n-1]; 
            k -= index * fact[n-1];  
            ans.push_back ( seq[index] ); 
            seq.erase ( index,1 ); 
            n--;
        }     
        ans+=seq;
        return ans;
    }
};