#include <stdio.h>
int main()
{
	int n = 8;
	printf("     Initially, n = %d at %#X\n", n, &n);
	for(int n = 1; n < 3; n++)
		printf("	loop 1: n = %d at %#X\n", n, &n);
	printf("After loop 1, n = %d at %#X\n\n", n, &n);
	for(int n = 1; n < 3; n++)
	{
		printf(" loop 2 index n = %d at %#X\n", n, &n);
		int n = 6;
		printf("	loop 2: n = %d at %#X\n\n", n, &n);
		n++;
	}
	printf("After loop 2, n = %d at %#X\n", n, &n);

	return 0;
}
