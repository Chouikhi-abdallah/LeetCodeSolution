class MinStack {
public:
    std::stack<int> s;
    std::stack<int> minStack;

    MinStack() {
        minStack.push(INT32_MAX); 
    }

    void push(int val) {
        s.push(val);
        if (val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minStack.top();
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */