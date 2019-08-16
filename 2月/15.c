#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	int k, b, count;
	count = 0;
	for(k = 0; k < 2; k++)
	{
		for(b = 0; b < 3; b++)
			printf("%10d %d", b * 200+100, k * 200+100);
//			printf("%d", count++);
			puts("");
	}
		
	return 0;
}
