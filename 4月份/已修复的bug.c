#include<stdio.h>
int main(void)
{
	double p[] = {[1] = 6.00};
	double *t = p;
	double *n,*m;
	m = t;//p[0]����ʼֵ
	n = t + ( sizeof (p) / sizeof (double) );//����p[2]Խ��ĵ�ַ

	/* �ϰ汾��д��sizeof(p)/sizeof(p[0])*/
	while(m < n)
	{
		printf("%lf\n",*m++);
		//	printf("o=%#X\np=%#X\n",o,p);
	}
	return 0;
}
