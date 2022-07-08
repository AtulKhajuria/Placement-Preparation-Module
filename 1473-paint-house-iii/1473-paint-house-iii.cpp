class Solution {
public:
    int dp[105][105][105];
  int nums;
  int helper(vector<int>&h,vector<vector<int>>&c,int i,int last,int tar)
  {
    if(i>=h.size())
    {
      if(tar==0)
        return 0;
      return 1e9;
    }
    if(tar<0)
      return 1e9;
    if(dp[i][last][tar]!=-1)
      return dp[i][last][tar];
    if(h[i]==0)
    {
      int mini=1e9;
      for(int col=1;col<=nums;col++)
      {
        int targ=tar;
        if(col!=last)
          targ--;
        mini=min(mini,c[i][col-1]+helper(h,c,i+1,col,targ));
      }
      return dp[i][last][tar]=mini;
    }
    else
    {
      int targ=tar;
      if(h[i]!=last)
      {
        targ--;
      }
      return dp[i][last][tar]=helper(h,c,i+1,h[i],targ);
    }
  }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(dp,-1,sizeof(dp));
      nums=n;
      int ans= helper(houses,cost,0,0,target);
      return ans==1e9?-1:ans;
    }
};