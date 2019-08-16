#include <stdio.h>
#define SIZE 50
int main(void)
{
	int days[SIZE];
	int i;

	for(i = 0; i < SIZE; i++)
		days[i] = 2 * i;

	for(i = 0; i < SIZE; i++)
		printf("%d %d\n", days[i], days[i]+1);
	return 0;
}
