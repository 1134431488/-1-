#include <stdio.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int index;

	for(index = 0; index < MONTHS; index++)
		printf("%2d月 %d天 %s\n", index + 1,*(days + index), days[index] < 31 ? "小":"大");

	return 0;
}
