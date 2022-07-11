class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cad1,cad2,c1=0,c2=0;
        for(int el:nums){
            if(cad1==el)c1++;
            else if(cad2==el)c2++;
            else if(c1==0){
                cad1=el;
                c1++;
            }
            else if(c2==0){
                cad2=el;
                c2++;
            }
            else{
                c1--;
                c2--;
            }       
        }
        int num1cnt=0,num2cnt=0;
        for(int el:nums){
            if(el==cad1)num1cnt++;
            else if(el==cad2)num2cnt++;
        }
        vector<int>ans;
        if(num1cnt>nums.size()/3)
        ans.push_back(cad1);
        if(num2cnt>nums.size()/3)
        ans.push_back(cad2);
        return ans;
    }
};