class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v(3,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
      for(int i=0;i<v[0];i++)
          nums[i]=0;
      for(int i=v[0];i<(v[0]+v[1]);i++)
          nums[i]=1;
      for(int i=v[0]+v[1];i<nums.size();i++)
          nums[i]=2;
    }
};