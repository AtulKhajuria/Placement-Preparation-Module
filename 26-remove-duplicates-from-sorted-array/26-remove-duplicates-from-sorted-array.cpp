class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j,k;
        i=j=0;
        k=1;
        for(i=0;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                nums[k]=nums[i];
                k++;
                j=i;
            }
        }
        return k;
    }
};