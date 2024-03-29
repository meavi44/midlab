//stack using queue


#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    MyStack() {
        
    }
    queue<int> qu;
    
    void push(int x) {
        qu.push(x);
        // Move all elements except the newly added one to the back of the queue
        for (int i = 0; i < qu.size() - 1; ++i) {
            qu.push(qu.front());
            qu.pop();
        }
    }
    
    int pop() {
        if (qu.empty()) return -1;
        int x = qu.front();
        qu.pop();
        return x;
    }
    
    int top() {
        if (qu.empty()) return -1;
        return qu.front();
    }
    
    bool empty() {
        return qu.empty();
    }
};