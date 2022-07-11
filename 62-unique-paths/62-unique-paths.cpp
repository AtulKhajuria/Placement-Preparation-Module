class Solution {
public:
    int uniquePaths(int m, int n){
    //     vector<vector<int>>dp[m][n]={-1};
    //     return ans=countPaths(m,n,0,0,dp);
    // }
    // int countPaths(int m, int n,int i=0,int j=0,vector<vector<int>> &dp) {
    //     if(i==m-1 && j==n-1)return 1;
    //     else if(i>=m || j>=n)return 0;
    //     else if(dp[i][j]!=-1)return dp[i][j];
    //     return dp[i][j]=countPaths(m,n,i+1,j,dp)+ countPaths(m,n,i,j+1,dp);
        int N=n+m-2;
        int r=n-1;
        double res=1;
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};