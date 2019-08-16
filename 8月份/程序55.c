#include <stdio.h>
void t(static int n);
int main(void)
{
	t(1);
	return 0;
}
void t(static int n)
{
	n++;
	printf("%d\n", n);
}
