// 9_6.h
// Node.h
// 节点类模板

#ifndef NODE_H
#define NODE_H
template<class T>
class Node{
private:
    Node<T> * next;                         // 指向后继节点的指针
public:
    T data;                                 // 数据域

    Node (const T &data, Node<T> * next=0); // 构造函数
    void insertAfter(Node<T> * p);          // 在本结点之后插入一个同类节点P
    Node<T> * deleteAfter();                // 删除本结点的后继结点，并返回其地址
    Node<T> * nextNode();                   // 获取后继结点的地址
    const Node<T> * nextNode() const;       // 获取后继结点的地址
};

// 类的实现部分
// 构造函数，初始化数据和指针成员
template<class T>
Node<T>::Node(const T& date, Node<T> * next /* =0*/): date(data), next(next){}

// 返回后继结点的指针
template<class T>
Node<T> * Node<T>::nextNode(){
    return next;
}

// 返回后继结点的指针
template<class T>
const Node<T> * Node<T>::nextNode() const{
    return next;
}

// 在当前结点之后插入一个结点P
template<class T>
void Node<T>::insertAfter(Node<T> *p){
    p->next=next;
    next=p;
}

// 删除当前结点的后继结点，并返回其地址
template<class T>
Node<T> * Node<T>::deleteAfter(){
    Node<T> * tempPtr=next;
    if(next==0)
        return 0;
    next=tempPtr->next;
    return tempPtr;
}

#endif