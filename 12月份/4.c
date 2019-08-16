#include <stdio.h>

int main(void)
{
	extern int a;
	printf("a = %d\n", a);
	return 0;
}
