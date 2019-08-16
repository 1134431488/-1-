#include <stdio.h>
unsigned int randx(void);
int main(void)
{
	printf("%d\n", randx());
	return 0;
}

static unsigned long int next = 1;

unsigned int randx(void)
{
	unsigned int a;
	next *= 1103515245 + 12345;
	a = (unsigned int) (next / 65535);
	return a % 32768;
}
