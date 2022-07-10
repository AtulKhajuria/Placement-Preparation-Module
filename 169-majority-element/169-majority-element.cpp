// class Solution { /*both approaches using extra sapce for map */
// public:
//     int majorityElement(vector<int>& nums) {
//         map<int, int> mp;
//         int k;
//         for(auto i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         map<int, int> :: iterator i;
//         for(i=mp.begin();i!=mp.end();i++){
//             if(i->second > (nums.size()/2))
//                 k=i->first;
//         }
//         return k;
//     }
// };
// class Solution{
//     public:
//     int majorityElement(vector<int>&nums){
//         map<int,int>mp;
//         int k;
//         for(auto i=0;i<nums.size();i++)mp[nums[i]]++;
//         for(auto itr : mp){
//             if(itr.second > (nums.size()/2))
//                 k=itr.first;
//         }
//         return k;
//     }
// };
class Solution{
    public:
    int majorityElement(vector<int>&nums){
        int count=0;
        int candidate;
        for(int i=0;i<nums.size();i++){
            if(count==0){
               candidate=nums[i];
               count+=1;
            }
                else{
                count+=(candidate==nums[i])?1:-1;
            }
        }
            return candidate;
    }
        
};