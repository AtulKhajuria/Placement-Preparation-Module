class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        int j=n-1;
        int maxLeft=-1;
        int maxRight=-1;
        int ans=0;
        for(int i=0;i<n;i++){
            maxLeft=max(maxLeft,height[i]);
            left[i]=maxLeft;
            maxRight=max(maxRight,height[j]);
            right[j--]=maxRight;
        }
        for(int i=0;i<n;i++){
            ans+=min(left[i],right[i])-height[i];
            
        }
        return ans;
    }
};