class MyStack {
public:
    queue<int> a,b;
    MyStack() {
        
    }
    
    void push(int x) {
        if(a.empty() and b.empty()){
            a.push(x);
        }
        else if(b.empty()){
            b.push(x);
            while(!a.empty()){
                b.push(a.front());
                a.pop();
            }
        }
        else{
            a.push(x);
            while(!b.empty()){
                a.push(b.front());
                b.pop();
            }
        }
    }
    
    int pop() {
        int d;
        if(a.empty()){
            d=b.front();
            b.pop();
        }
        else{
            d=a.front();
            a.pop();
        }
        return d;
    }
    
    int top() {
        if(a.empty()) return b.front();
        else return a.front();
    }
    
    bool empty() {
        return a.empty() and b.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
