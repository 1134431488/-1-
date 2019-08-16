#include <stdio.h>
int main(void)
{
	const int days[] = {3,1,2,4,5,6,7,89,89};

	int index;
	printf("days=%d	days[0]=%d\n\n", sizeof(days), sizeof(days[0]));
	for(index = 0; index < sizeof days / sizeof days[0]; index++)
		printf("%2d\n", days[index]);
	printf("\n\n%d\n", sizeof(days) / sizeof(int));
	return 0;
}
