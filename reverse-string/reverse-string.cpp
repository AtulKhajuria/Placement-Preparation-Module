class Solution {
public:
    void reversest(vector<char>&s,int left,int right){
        if(left>=right)
            return;
        swap(s[left],s[right]);
        reversest(s,++left,--right);
    }
    void reverseString(vector<char>& s) {
        int i=s.size()-1;
        reversest(s,0,i);
    }
};