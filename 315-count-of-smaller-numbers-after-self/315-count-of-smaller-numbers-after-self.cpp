
class BIT{
    vector<int> bit;
public:
    BIT(int n) : bit(n+1) { }
    void update(int i, int val) {
        for(;i <= size(bit); i += i & -i) bit[i] += val;
    }
    int query(int i) {  
        int res = 0;
        for(;i > 0; i -= i & -i) res += bit[i];
        return res;
    }
};
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        const int MAX = 1e4+1;  
        for_each(begin(nums), end(nums), [](int& n){n += MAX;});
        BIT T(2*MAX);
        for(int i = size(nums)-1; ~i; i--) 
            T.update(nums[i], 1),
            nums[i] = T.query(nums[i] - 1);
        return nums;
    }
};
