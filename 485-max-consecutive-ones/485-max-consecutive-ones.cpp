class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes=0;
        int count=0;
        for(auto i: nums){
            if(i==0)
                count=0;
            else count++;
            maxOnes=max(maxOnes,count);
        }
        return maxOnes;
    }
};