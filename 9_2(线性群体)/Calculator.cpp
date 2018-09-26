// 9_9
// Calculator.cpp

#include "Calculator.h"
#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;

void Calculator::enter(double num){
    s.push(num);
}

// 连续将两个操作数弹出栈，房子opnd1和opnd2中
// 如果栈中没有两个操作数，则返回false并输出相关信息
bool Calculator::getTwoOperands(double &opnd1, double &opnd2){
    if(s.isEmpty()){
        cerr<<"Missing operand!"<<endl;
        return false;
    }
    opnd1=s.pop();
    if(s.isEmpty()){
        cerr<<"Missing oprand!"<<endl;
        return false;
    }
    opnd2=s.pop();
    return true;
}

void Calculator::compute(char op){
    double operand1, operand2;
    bool result=getTwoOperands(operand1, operand2);

    if(result){
        switch(op){
        case '+':
            s.push(operand2+operand1);
            break;
        case '=':
            s.push(operand2-operand1);
            break;
        case '*':
            s.push(operand2*operand1);
            break;
        case '/':
            if(operand1==0){
                cerr<<"Divided by 0!"<<endl;
                s.clear();
            }else
                s.push(operand2/operand1);
            break;
        case '^':
            s.push(pow(operand2, operand1));
            break;
        default:
            cerr<<"Unrecognized operator!"<<endl;
            break;
        }
        cout<<"="<<s.peek()<<" ";
    }else
        s.clear();
}

// 工具函数，用于将字符串转换为实数
inline double stringToDouble(const string &str){
    istringstream stream(str);          // 字符串输入流
    double result;
    stream>>result;
    return result;
}

void Calculator::run(){
    string str;
    while(cin>>str, str!="1"){
        switch(str[0]){
        case 'c':
            s.clear();
            break;
        case '-':
            if(str.size()>1)
                enter(stringToDouble(str));
            else
                compute(str[0]);
            break;
        
        case '+':
        case '*':
        case '/':
        case '^':
            compute(str[0]);    // 执行计算
            break;
        default:
            enter(stringToDouble(str));
            break;
        }
    }
}

void Calculator::clear(){
    s.clear();
}

#include "Calculator.h"
int main(){
    Calculator c;
    c.run();
    return 0;
}
