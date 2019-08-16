#include <stdio.h>

void main(void)
{
	char str[100];
//	char * p = &str[0];
	char * p;
	scanf("%s", p);
	printf("str:%#X		p:%#X\n", str, p);
	printf("str:%s		p:%s", str, p);
}
