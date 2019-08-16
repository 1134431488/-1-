#include<stdio.h>
int main(void)
{
	int *p;
	int k[] = {[5]=6};//使用C99新特性，指定初始化器 
	int i;
	for( i=0; i < sizeof(k) / (sizeof k[0]); i++ ) 
	{
		printf("%d\n", k[i]);
	}
	p = k;
	printf("p=%#X &*p=%#X k=%#X &k=%#X\n", p, &(*p), k, &k); 
	/*
		寻址指针得到它本身的地址，如果寻址*p，则得出的是数组名的地址
		由于&*优先级相同，从右向左结合，即便没有括号也先对*p求值再对
		它寻址！ 
	*/
	return 0;
 } 
