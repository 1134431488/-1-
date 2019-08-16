#include <stdio.h>
#define SIZE 4

int main(void)
{
	int value1 = 44;
	int arr[SIZE];
	int value2 = 88;
	int i;

	printf("value1 = %d, value2 = %d\n", value1, value2);
	printf("value1 = %#X, value2 = %#X\n\n", &value1, &value2);
	for(i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1;
	for(i = -1; i < 7; i++)
		printf("%2d %-8d %#X\n", i, arr[i], &arr[i]);
	putchar('\n');
	printf("value1 = %d, value2 = %d\n", value1, value2);
	return 0;
}

