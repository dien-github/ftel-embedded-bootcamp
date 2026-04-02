class MyStack {
private:
    std::queue<int> firstQueue;
    std::queue<int> secondQueue;

public:
    MyStack() {}

    void push(int x) {
        if (secondQueue.empty()) {
            secondQueue.push(x);
            while (!firstQueue.empty()) {
                secondQueue.push(firstQueue.front());
                firstQueue.pop();
            }
        } else {
            firstQueue.push(x);
            while (!secondQueue.empty()) {
                firstQueue.push(secondQueue.front());
                secondQueue.pop();
            }
        }
    }

    int pop() {
        int ret;
        if (firstQueue.empty()) {
            ret = secondQueue.front();
            secondQueue.pop();
        } else {
            ret = firstQueue.front();
            firstQueue.pop();
        }
        return ret;
    }

    int top() {
        return (!firstQueue.empty()) ? firstQueue.front() : secondQueue.front();
    }

    bool empty() { return (firstQueue.empty() && secondQueue.empty()); }
};
