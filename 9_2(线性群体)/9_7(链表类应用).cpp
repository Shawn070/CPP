// 9_7.cpp
// 从键盘输入10个整数，用这些整数值作为结点数据，生成一个链表，按顺序输出链表中结点的数值。
// 然后从键盘输入一个待查找的整数，在链表中查找该整数，若找到则删除该整数所在的结点（如果
// 出现多次，全部删除），然后输出删除结点以后的链表。在程序结束之前清空链表。

#include<iostream>
#include "LinkedList.h"
using namespace std;

int main(){
    LinkedList<int> list;
    
    // 输入10个整数依次向表头插入
    for(int i=0; i<10; i++){
        int item;
        cin>>item;
        list.insertFront(item);
    }

    // 输出链表
    cout<<"List: ";
    list.reset();
    // 输出各结点数据，直到链表尾
    while(!list.endOfList()){
        cout<<list.data()<<" ";
        list.next();              // 使游标指向下一个结点
    }
    cout<<endl;

    // 输入需要删除的整数
    int key;
    cout<<"Please enter some integer needed to be deleted: ";
    cin>>key;
    
    // 查找并删除结点
    list.reset();
    while(!list.endOfList()){
        if(list.data()==key)
            list.deleteCurrent();
        list.next();
    }

    // 输出链表
    cout<<"List: ";
    list.reset();
    // 输出各结点数据，知道链表尾
    while(!list.endOfList()){
        cout<<list.data()<<" ";
        list.next();            // 使游标指向下一个结点
    }
    cout<<endl;

    return 0;
}

