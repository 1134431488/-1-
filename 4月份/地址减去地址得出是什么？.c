#include<stdio.h>
int main(void)
{
	int *p[] = { [5] = 6 };
	int n;
	printf("地址相减%#X\n",&p[5] - &p[0]);
	printf("%lu\n",(&p[5] - &p[0]) * sizeof (int));
	printf("%#X\n",&p[0]);
	printf("%#X\n\n",&p[5]);

	for(n = 0; n < (int)(sizeof (p) / sizeof (p[0])); n++)//强制类型转换 
	{
	printf("p[%d]=%#X\n",n , &p[n]);
	//printf("%d\n",p[n]);		
	}
	printf("%#X\n",&p[5] - 5); 
	return 0; 
 } 
