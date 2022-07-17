class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       set<long int>hashset;
        for(auto n:nums){
            hashset.insert(n);
        }
        long int lar_seq=0;
        for(auto n:hashset){
            if(!hashset.count(n-1)){
                long int currentstreak=1;
                long int currentnum=n;
                
                while(hashset.count(currentnum + 1)){
                    currentnum+=1;
                    currentstreak+=1;
                }
                lar_seq=max(lar_seq,currentstreak);
            }
        }
        return lar_seq;
    }
};