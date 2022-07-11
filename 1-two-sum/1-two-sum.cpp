class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map<int,int>mpp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(t-nums[i])!=mpp.end()){
                v.push_back(mpp[(t-nums[i])]);
                v.push_back(i);
                return v;
            }
            mpp[nums[i]]=i;
        }
        return v;
        
    }
};