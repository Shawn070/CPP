// 9_8.h
// Stack.h
#include STACK_H
#define STACK_H
#include<cassert>

// 模板的定义，SIZE为栈的大小
template<class T, int SIZE=50>
class Stack{
private:
    T list[SIZE];
    int top;                    // 栈顶位置（数组下标）
public:
    Stack();
    void push(const T &item);
    T pop();
    void clear();
    const T &peek() const;      // 访问栈顶元素
    bool isEmpty() const;
    bool isFull() const;
};

// 模板实现
template<class T, int SIZE>
Stack<T, SIZE>::Stack():top(-1){}

#endif