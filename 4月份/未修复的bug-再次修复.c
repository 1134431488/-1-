#include<stdio.h>
int main(void)
{
	double p[] = {[1] = 6.00};
	double *t = p;
	double *n;
	n = t + (int) sizeof (p) / sizeof (double);
	while(t < n) /* �ϰ汾��д��sizeof(p)/sizeof(p[0])*/
	{
		printf("%.2lf\n",*t++);
	}
	return 0;
}
