class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int buyprice=prices[0];
        for(int n : prices){
            if(buyprice>n)
                buyprice=n;
            if((n-buyprice)>maxProfit)
                maxProfit=n-buyprice;
        }
        return maxProfit;
    }
};