class MyQueue {
public:
    std::stack<int> sFirst, sSecond;
    MyQueue() {}

    void push(int x) {
        while (!sFirst.empty()) {
            sSecond.push(sFirst.top());
            sFirst.pop();
        }
        sSecond.push(x);
        while (!sSecond.empty()) {
            sFirst.push(sSecond.top());
            sSecond.pop();
        }
    }

    int pop() {
        int ret = sFirst.top();
        sFirst.pop();
        return ret;
    }

    int peek() { return sFirst.top(); }

    bool empty() { return sFirst.empty(); }
};
