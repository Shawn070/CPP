// 9_9: 栈的应用--一个简单的整数计算器
// 使用时算式次啊用后缀输入法，每个操作数、操作符之间都已空白符间隔。
// 例如，“3+5”则输入“3 5 +”。乘方运算符用“^”表示，每次运算在前次结果
// 基础上进行，若要将前次运算结果清除，可输入“c”。当输入“q”时程序结束。

// Calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "Stack.h"

class Calculator{
private:
    Stack<double>s;                                     // 操作数栈
    void enter(double num);                             //将操作数num压入栈
    // 连续将两个操作数弹出栈，放在opnd1和opnd2中
    bool getTwoOperands(double &opnd1, double &opnd2);
    void compute(char op);                              // 执行由操作符op指定的运算
public:
    void run();
    void clear();
};

#endif