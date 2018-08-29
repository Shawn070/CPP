// 6_2.cpp
// 使用数组名传递数据时，传递的是地址
// 如果在被调函数中对形参数组元素值进行改变，主调函数中实参数组的相应元素值也会改变。

#include<iostream>
using namespace std;
void rowSum(int a[][4], int nRow){
	for (int i=0; i<nRow; i++){
		for (int j=1; j<4; j++)
			a[i][0] += a[i][j];
	}
}

int main(){
	int table[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}};
	for (int i=0; i<3; i++){
		for (int j=0; j<4; j++)
			cout << table[i][j] << "	";
		cout << endl;
	}
	rowSum(table, 3);
	for(int i=0; i<3; i++)
		cout << "Sum of row " << i << " is " << table[i][0] << endl;
	return 0;
}

/* OutPut:
1	2	3	4	
2	3	4	5	
3	4	5	6	
Sum of row 0 is 10
Sum of row 1 is 14
Sum of row 2 is 18
*/
