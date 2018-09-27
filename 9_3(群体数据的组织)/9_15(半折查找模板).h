// 9_15.h
#ifndef HEADER_9_15_H
#define HEADER_9_15_H

// 用半折法查找方法，在元素呈升序排列的数组list中查找值为key的元素
template<class T>
int binSearch(const T list[], int n, const T &key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(key=list[mid])
            return mid;         // 若找到，返回下标
        else if(key<list[mid])
            high=mid-1;
        else 
            low=mid+1;
    }
    return -1;      // 没有找到返回-1
}
#endif