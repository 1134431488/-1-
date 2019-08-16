#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	time_t t1, t2; //分别声明两种time()使用方式的赋值对象


	t1=time(0); //第一种使用方式
	time(&t2); //第二种使用方式


	printf("t1=%ld\n",t1);
	printf("t2=%ld\n",t2);
	printf("rand最大面数：%d\n", RAND_MAX);
	printf("rand最大面数：%d\n", INT_MAX);

	return(0);
}

