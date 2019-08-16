#include <stdio.h>
int main(void)
{
	int x = 30;
	printf("%-10d%#X\n", x, &x);
	{
		int x = 77;
		printf("%-10d%#X\n", x, &x);
	}
	printf("%-10d%#X\n", x, &x);
	while(x++ < 33)
	{
		int x = 100;
		x++;
		printf("%-10d%#X\n", x, &x);
	}
	printf("%-10d%#X\n", x, &x);
	return 0;
}
