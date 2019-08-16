//本代码是记述声明二维数组另一种方式 
#include <stdio.h>
								//typedef 类型 别名  用一个别名表示这个类型 
int main(void)
{
	typedef int arr4[4];		//arr4是一个内含4个int的数组
	typedef arr4 arr3x4[3];  	//arrx4是一个内含3个arr4的数组
//-------------------------------------------------------------------------------	
	int sum2(arr3x4 ar, int rows);		//把arr3x4当做是ar的类型，与下面声明相同 
	int sum2(int ar[3][4], int rows);	//与下面声明相同 
	int sum2(int ar[][4], int rows);	//与下面声明相同 
//-------------------------------------------------------------------------------	
	return 0;	
 } 
