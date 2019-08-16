#include <stdio.h>
int *c(void);
int main(void)
{
	
//	{
//	loop:
//		printf("asd\n");
//	}
//	goto loop;
	int *p;
	p = c();
	printf("%d\n", *p);

	return 0;
}
int *c(void)
{
	static int n = 9;
	printf("%#X\n", &n);
	return &n;
}
