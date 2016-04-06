class MinStack {
private:
    stack<int> Stack;
    stack<int> minSta;
    
public:
    void push(int x) {
        Stack.push(x);
        if(minSta.empty() || x<=minSta.top())
            minSta.push(x);
    }

    void pop() {
        int x;
        if(Stack.top()==minSta.top())
            minSta.pop();
        Stack.pop();
        
    }

    int top() {
        return Stack.top();
    }

    int getMin() {
        return minSta.top();
    }
};