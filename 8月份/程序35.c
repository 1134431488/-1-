#include <stdio.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int index;

	for(index = 0; index < MONTHS; index++)
		printf("%2d�� %d�� %s\n", index + 1,*(days + index), days[index] < 31 ? "С":"��");

	return 0;
}
