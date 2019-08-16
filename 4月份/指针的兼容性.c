#include <stdio.h>
	int main(void)
	{

		int *pt;
		int (*pa)[3];
		int ar1[2][3];
		int ar2[3][2];
		int **p2;
		pt = &ar1[0][0];
		pt = ar1[0];
		pt = ar1;				//无效
		pa = ar1;				//都是指向内含3个int类型元素数组的指针
		pa = ar2;				//无效
		p2 = &pt;				//两个指针都是指向整数型
		*p2 = ar2[0];			//都是指向int的指针
		p2 = ar2;
		return 0;
	}
 
