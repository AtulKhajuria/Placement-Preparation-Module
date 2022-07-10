class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col=matrix[0].size()-1;
        int RowLow=0;
        bool flag=false;
        int RowHigh=matrix.size()-1;
        int RowMid=(RowLow+RowHigh)/2;
        while(RowLow<=RowHigh){
            RowMid=RowLow+(RowHigh-RowLow)/2;
            if(matrix[RowMid][0]>target)
                RowHigh=RowMid-1;
            else if(matrix[RowMid][0]<=target && matrix[RowMid][col]>=target){
                break;
            }
            else
                RowLow=RowMid+1;
        }
        int lb=0,ub=col;
        while(lb<=ub){
            int mid=lb+(ub-lb)/2;
            if(matrix[RowMid][mid]==target){
                flag=true;
                return flag;
            }
            else if(matrix[RowMid][mid]>target){
                ub=mid-1;
            }
            else
                lb=mid+1;
        }
        return flag;
    }
};