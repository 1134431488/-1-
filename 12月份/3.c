#include <stdio.h>
extern int c;
void a(int k)
{
	printf("%d\n", c);
	printf("k=%d\n", k);
}
