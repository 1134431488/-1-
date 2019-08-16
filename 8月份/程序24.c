#include <stdio.h>
#include <string.h>
int main(void)
{
	int ar[10];
	int * restrict restar = (int *)malloc(10 * sizeof(int));
	int * par = ar;
	//这里说明restar变量是访问malloc()函数分配内存的唯一且初识的方式。par就不是了
	for(n = 0; n < 10; n++)
	{
		par[n] += 5;//数组元素的值都赋值为5
		restar[n] + =5;
		ar[n] *= 2;//2*5 = 10
		par[n] += 3;
		restar[n] += 3;
	}
	return 0;
}
