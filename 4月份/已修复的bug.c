#include<stdio.h>
int main(void)
{
	double p[] = {[1] = 6.00};
	double *t = p;
	double *n,*m;
	m = t;//p[0]的起始值
	n = t + ( sizeof (p) / sizeof (double) );//代表p[2]越界的地址

	/* 老版本的写法sizeof(p)/sizeof(p[0])*/
	while(m < n)
	{
		printf("%lf\n",*m++);
		//	printf("o=%#X\np=%#X\n",o,p);
	}
	return 0;
}
