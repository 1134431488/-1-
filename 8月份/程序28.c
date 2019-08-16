#include <stdio.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
	int i;
	printf("[4]=31 代表第5位元素修改为31\n")
	for(i = 0; i < MONTHS; i++)
		printf("%2d  %d\n", i+1, days[i]);
	return 0;
}
