class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int sum=0-nums[i];
            vector<int>temp;
            int lo=i+1,hi=nums.size()-1;
            while(lo<hi){
                if(nums[lo]+nums[hi]==sum){
                    temp.clear();
                    temp.push_back(nums[i]);
                    temp.push_back(nums[lo]);
                    temp.push_back(nums[hi]);
                    ans.push_back(temp);
                    while(lo<hi && nums[lo]==nums[lo+1])lo++;
                    while(hi>lo && nums[hi]==nums[hi-1])hi--;
                    lo++;
                    hi--;
                }
                else{
                    if(nums[lo]+nums[hi]<sum)lo++;
                    else if(nums[lo]+nums[hi]>sum)hi--;
                }
            }
            while(nums[i]==nums[i+1]&&i<nums.size()-2)i++;
        }
            return ans;
    }
};