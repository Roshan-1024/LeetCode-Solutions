class CustomStack {
    int maxSize;
    vector<int> stack;
public:
    CustomStack(int maxSize) : maxSize(maxSize) {}
    
    void push(int x) {
        if(stack.size() < maxSize)  stack.push_back(x);
    }
    
    int pop() {
        if(stack.size() == 0)   return -1;
        int temp = stack[stack.size()-1];
        stack.pop_back();
        return temp;
    }
    
    void increment(int k, int val) {
        for(int i = 0; i < k && i < stack.size(); i++){
            stack[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */