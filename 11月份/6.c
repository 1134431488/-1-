#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	static float a,x,n;
	while (3 * (a * x - 2) - (x + 1) != 2 * ((n / 2)  + x))
	{
		a = rand();
		x = rand();
		n = rand();
	}
	printf("a = %.f x = %.f n = %.f\n", a, x, n);
	return 0;
}
