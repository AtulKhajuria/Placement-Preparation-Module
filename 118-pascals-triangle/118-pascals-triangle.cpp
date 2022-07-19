// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> pa(numRows);
//         for(int i=0;i<numRows;i++){
//             pa[i].resize(i+1);
//             pa[i][0]=pa[i][i]=1;
//             for(int j=1;j<i;j++){
//                 {
//                     pa[i][j]=pa[i-1][j-1]+pa[i-1][j];
//                 }
//             }
//         }
//         return pa;
//     }
// };
class Solution{
    public:
        vector<vector<int>> generate(int numRows){
            vector<vector<int>>ans(numRows);
            for(int i=0;i<numRows;i++){
                ans[i].resize(i+1);
                ans[i][0]=ans[i][i]=1;
                for(int j=1;j<i;j++){
                    ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
                }
            }
            return ans;
        }
};