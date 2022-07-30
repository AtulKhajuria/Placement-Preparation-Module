class MinStack {
public:
    MinStack() {}
    void push(int val) {
        v.push_back(val);
        if(val<min) min=val;
    }
    
    void pop() {
        int aux=v.back();
        v.pop_back();
        if(aux==min){
            min=INT_MAX;
            for(int i=0;i<v.size();i++){
                if(min>v[i]) min=v[i];
            }
        }
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        return min;
    }
    private:
    vector<int> v;
    int min=INT_MAX;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */