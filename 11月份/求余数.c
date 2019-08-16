#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c;
	a = 1103515245 + 12345;
	printf("a = %d\n", a);
	b = 65536;
	a = a / b;
	printf("a = %d\n", a);
	c = 32768;  // c * 2 = b
	a = a % c;
	printf("ำเสýึต = %d\n");
	return 0;
}
