// 9_12.h
#ifndef HEADER_9_12_H
#define HEADER_9_12_H

// 辅助函数：交换x和y的值
template<class T>
void mySwap(T &x, T &y){
    T temp=x;
    x=y;
    y=temp;
}

// 用选择法对数组a的n个元素进行排序
template<class T>
void selectionSort(T a[], int n){
    for(int i=0; i<n-1; i++){
        int leastiIndex=i;          // 最小元素的下标初值设为i
        // 在元素a[i+1]..a[n-1]中逐个比较，找出最小值
        for(int j=i+1; j<n; j++)
            if(a[j]<a[leastiIndex]) // leastIndex始终记录当前找到的最小值的下标
                leastiIndex=j;
        mySwap(a[i, a[leastiIndex]);// 将这一趟找到的最小元素与a[i]交换
    }
}

#endif