// 9_8.h
// Stack.h
#ifndef STACK_H
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
Stack<T, SIZE>::Stack():top(-1){}           // 构造函数，栈顶初始化为-1

template<class T, int SIZE>
void Stack<T, SIZE>::push(const T &item){   // 将元素item压入栈
    assert(!isFull());
    list[++top]=item;
}

template<class T, int SIZE>
T Stack<T, SIZE>::pop(){                    // 将栈顶元素弹出栈
    assert(!isEmpty());
    return list[top--];
}

template<class T, int SIZE>
const T &Stack<T, SIZE>::peek() const{      // 访问栈顶元素
    assert(!isEmpty());
    return list[top];
}

template<class T, int SIZE>
bool Stack<T, SIZE>::isEmpty() const{       // 测试栈是否为空
    return top==-1;
}

template<class T, int SIZE>
bool Stack<T, SIZE>::isFull() const{       // 测试栈是否为满
    return top==SIZE-1;
}

template<class T, int SIZE>
void Stack<T, SIZE>::clear(){              // 清空栈
    top=-1;
}

#endif