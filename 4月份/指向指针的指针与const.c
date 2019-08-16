#include <stdio.h>
int main(void)
{
	const int **pp2;
	int *p1;
	const int n = 13;
	pp2 = &p1;//这里指向的是&p1，而不是p1，意味着pp2 == &p1，*pp2 == p1 
	*pp2 = &n;//从上可得*pp2 == p1 ，那么p1代表了*pp2，p1是一个指针，不知不觉间p1 = &n  
	*p1 = 11; //最终我们改变了const n的值
	printf("*pp2%#X  p1%#X  &n%#X\n", *pp2, p1, &n);
	printf("%d      %d     %d\n", **pp2, *p1, n); 
	return 0;
 } 
 /*以上这些结果都是未定义的，就意味着在C语言中可以运行，但是会警告！C++下运行就会出错*/
