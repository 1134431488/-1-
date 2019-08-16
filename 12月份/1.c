#include <stdio.h>
#include <stdlib.h>
int * hs(void);
int main(void)
{
	int * x;

	hs();
	x = hs();
	printf("------------\nmain：\nx[0] = %d\n", *x + 0);
	free(x);
	return 0;
}
/*得出结论，每次调用malloc，在下次调用包含它的函数之前，要先free。再次调用，会重置malloc元素的值，不是原来分配的p值了*/
int * hs(void)
{
	int n = 10;
	int a[n];//变长数组
	int *p;

	p = (int *)malloc(10 * sizeof(int));
	printf("\nP值地址：%#X\n", p);
	if(p != NULL)
	{
		printf("p[0] = %d\n", *p);
	}
	printf("a[0] = %d\n", a[0]);

	p[0] = 80;
	a[0] = 99;
	return p;
}
